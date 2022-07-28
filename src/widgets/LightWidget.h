#pragma once
#include <qwidget.h>
#include <qpainter.h>

class LightWidget : public QWidget
{
    Q_OBJECT
        Q_PROPERTY(bool on READ isOn WRITE setOn)
public:
    LightWidget(QWidget* parent)
        : QWidget(parent), m_on(false) 
    {
        m_color = Qt::red;
    }

    bool isOn() const
    {
        return m_on;
    }
    void setOn(bool on)
    {
        if (on == m_on)
            return;
        m_on = on;
        update();
    }

public slots:
    void turnOff() { setOn(false); }
    void turnOn() { setOn(true); }

protected:
    void paintEvent(QPaintEvent*) override
    {
        if (!m_on)
            return;
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setBrush(m_color);
        painter.drawEllipse(0, 0, width(), height());

        painter.setPen(Qt::blue);
        painter.setFont(QFont("Arial", 10));
        painter.drawText(rect(), Qt::AlignCenter, "Alarm");
    }

private:
    QColor m_color;
    bool m_on;
};

