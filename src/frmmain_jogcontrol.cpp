﻿/*
 * Candle2
 * Copyright (C) 2015-2016 Hayrullin Denis Ravilevich
 * Copyright (C) 2018-2019 Patrick F.

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
#include <QScrollBar>
#include <QDebug>
#include <QElapsedTimer>

#include "frmmain.h"
#include "ui_frmmain.h"

#include "interface/SerialInterface.h"
#include "GrIP/GrIP.h"



bool frmMain::keyIsMovement(int key)
{
    return key == Qt::Key_4 || key == Qt::Key_6 || key == Qt::Key_8 || key == Qt::Key_2 || key == Qt::Key_9 || key == Qt::Key_3;
}

void frmMain::on_grpJog_toggled(bool checked)
{
    updateJogTitle();
    updateLayouts();

    ui->widgetJog->setVisible(checked);
}

void frmMain::on_chkKeyboardControl_toggled(bool checked)
{
    ui->grpJog->setProperty("overrided", checked);
    style()->unpolish(ui->grpJog);
    ui->grpJog->ensurePolished();

    // Store/restore coordinate system
    if (checked)
    {
        sendCommand("$G", -2, m_settings->showUICommands());
    }
    else
    {
        if (m_absoluteCoordinates)
        {
            sendCommand("G90", -1, m_settings->showUICommands());
        }
    }

    if (!m_processingFile)
    {
        m_storedKeyboardControl = checked;
    }

    updateJogTitle();
    updateControlsState();
}

void frmMain::updateJogTitle()
{
    if (ui->grpJog->isChecked() || !ui->chkKeyboardControl->isChecked())
    {
        ui->grpJog->setTitle(tr("Jog"));
    }
    else if (ui->chkKeyboardControl->isChecked())
    {
        ui->grpJog->setTitle(tr("Jog") + QString(tr(" (%1/%2)")).arg(ui->cboJogStep->currentText().toDouble() > 0 ? ui->cboJogStep->currentText() : tr("C")).arg(ui->cboJogFeed->currentText()));
    }
}

void frmMain::jogStep(bool isXboxCtrl)
{
    if (m_jogVector.length() == 0)
        return;

    if (ui->cboJogStep->currentText().toDouble() == 0)
    {
        const double acc = m_settings->acceleration();              // Acceleration mm/sec^2
        int speed = ui->cboJogFeed->currentText().toInt();          // Speed mm/min
        double v = (double)speed / 60;                              // Rapid speed mm/sec
        int N = 15;                                                 // Planner blocks
        double dt = qMax(0.01, sqrt(v) / (2 * acc * (N - 1)));      // Single jog command time
        double s = v * dt;                                          // Jog distance

        QVector4D vec = m_jogVector.normalized() * s;
        qDebug()<<"continul jog: X"<<vec.x()<<" Y"<<vec.y()<<" Z"<<vec.z()<<" W"<<vec.w()<<" ";

        sendCommand(QString("$J=G21G91X%1Y%2Z%3A%4F%5")
                    .arg(vec.x(), 0, 'g', 4)
                    .arg(vec.y(), 0, 'g', 4)
                    .arg(vec.z(), 0, 'g', 4)
                    .arg(vec.w(),0,'g',4)
                    .arg(speed), -3, m_settings->showUICommands());//old -2
    }
    else
    {
        int speed = ui->cboJogFeed->currentText().toInt();          // Speed mm/min
        QVector4D vec = m_jogVector * ui->cboJogStep->currentText().toDouble();

        sendCommand(QString("$J=G21G91X%1Y%2Z%3A%4F%5")
                    .arg(vec.x(), 0, 'g', 4)
                    .arg(vec.y(), 0, 'g', 4)
                    .arg(vec.z(), 0, 'g', 4)
                    .arg(vec.w(), 0, 'g', 4)
                    .arg(speed), -3, m_settings->showUICommands());
    }
}

void frmMain::on_cmdYPlus_pressed()
{
    m_jogVector += QVector4D(0, 1, 0,0);
    jogStep();
}

void frmMain::on_cmdYPlus_released()
{
    m_jogVector -= QVector4D(0, 1, 0,0);
    jogStep();
}

void frmMain::on_cmdYMinus_pressed()
{
    m_jogVector += QVector4D(0, -1, 0,0);
    jogStep();
}

void frmMain::on_cmdYMinus_released()
{
    m_jogVector -= QVector4D(0, -1, 0,0);
    jogStep();
}

void frmMain::on_cmdXPlus_pressed()
{
    m_jogVector += QVector4D(1, 0, 0,0);
    jogStep();
}

void frmMain::on_cmdXPlus_released()
{
    m_jogVector -= QVector4D(1, 0, 0,0);
    jogStep();
}

void frmMain::on_cmdXMinus_pressed()
{
    m_jogVector += QVector4D(-1, 0, 0,0);
    jogStep();
}

void frmMain::on_cmdXMinus_released()
{
    m_jogVector -= QVector4D(-1, 0, 0,0);
    jogStep();
}

void frmMain::on_cmdZPlus_pressed()
{
    m_jogVector += QVector4D(0, 0, 1,0);
    jogStep();
}

void frmMain::on_cmdZPlus_released()
{
    m_jogVector -= QVector4D(0, 0, 1,0);
    jogStep();
}

void frmMain::on_cmdZMinus_pressed()
{
    m_jogVector += QVector4D(0, 0, -1,0);
    jogStep();
}

void frmMain::on_cmdZMinus_released()
{
    m_jogVector -= QVector4D(0, 0, -1,0);
    jogStep();
}


void frmMain::on_cmdAPlus_pressed()
{
    m_jogVector += QVector4D(0, 0, 0,1);
    jogStep();
}


void frmMain::on_cmdAPlus_released()
{
    m_jogVector -= QVector4D(0, 0, 0,1);
    jogStep();
}


void frmMain::on_cmdAMinus_pressed()
{
    m_jogVector += QVector4D(0, 0, 0,-1);
    jogStep();
}


void frmMain::on_cmdAMinus_released()
{
    m_jogVector -= QVector4D(0, 0, 0,-1);
    jogStep();
}

void frmMain::GetLeftThumbstick(short uID, double x, double y)
{
    if (x != 0 || y != 0)
    {
        //qDebug() << "userID - " << uID << "; Left Thumb X: " << x << ", Left Thumb Y: " << y;
        if(abs(x)>abs(y)){
            xboxJogStatus=x>0?1:2;
        }else{
            xboxJogStatus=y>0?3:4;
        }

    }
}
void frmMain::GetRightThumbstick(short uID, double x, double y)
{
    if (x != 0 || y != 0)
    {
        //qDebug() << "userID - " << uID << "; Right Thumb X: " << x << ", Right Thumb Y: " << y;
        xboxJogStatus=abs(x)>abs(y)?3:4 ;
    }
}

void frmMain::GetLeftTrigger(short uID, byte Value)
{
        if (Value > 60 ){
            switch (xboxJogStatus) {
            case 1:
                on_cmdXPlus_pressed();
                break;
            case 2:
                on_cmdXMinus_pressed();
            case 3:
                on_cmdYPlus_pressed();
            case 4:
                on_cmdYMinus_pressed();
            default:
                break;
            }
            leftTrigOning=true;
        }else{
            if(leftTrigOning){
                switch (xboxJogStatus) {
                case 1:
                    on_cmdXPlus_released();
                    break;
                case 2:
                    on_cmdXMinus_released();
                case 3:
                    on_cmdYPlus_released();
                case 4:
                    on_cmdYMinus_released();
                default:
                    break;
                }
                leftTrigOning=0;
            }
        }
}
void frmMain::GetRightTrigger(short uID, byte Value)
{
        if (Value > 60){
            if(!rightTrigOning){
                jogStep(true);
                rightTrigOning=1;
            }
        }else if(Value>10 && Value<60){
            if(rightTrigOning){
                m_jogVector=QVector4D(0,0,
                                      m_jogVector.z()*(-1.0),
                                      m_jogVector.w()*(-1.0));
                jogStep(true);
                rightTrigOning=0;
            }
        }
        //if (Value > 1)
        //    qDebug() << "userID - " << uID << "; Right Trigger Value: " << Value;
}

void frmMain::on_cmdStop_clicked()
{
    m_CommandQueueList.clear();
    mCommandsWait.clear();
    mCommandsSent.clear();
    QElapsedTimer timer;
    timer.start();
    // Jog cancel
    if(m_Protocol == PROT_GRBL1_1)
    {
        SerialIf_Write(QByteArray(1, char(0x85)));
    }
    else if(m_Protocol == PROT_GRIP)
    {
        //QByteArray data(1, char(0x85));
        //GrIP_Transmit(MSG_REALTIME_CMD, 0, (const uint8_t*)data.constData(), data.length());
        uint8_t c = 0x85;
        Pdu_t p = {&c, 1};
        GrIP_Transmit(MSG_REALTIME_CMD, 0, &p);
    }
    qDebug()<<"jog stop :"<<timer.elapsed();


}
