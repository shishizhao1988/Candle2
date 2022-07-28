// This file is a part of "Candle" application.
// Copyright 2015-2016 Hayrullin Denis Ravilevich

#include "heightmapborderdrawer.h"

HeightMapBorderDrawer::HeightMapBorderDrawer()
{
}

QRectF HeightMapBorderDrawer::borderRect() const
{
    return m_borderRect;
}

void HeightMapBorderDrawer::setBorderRect(const QRectF &borderRect)
{
    m_borderRect = borderRect;
    update();
}

void HeightMapBorderDrawer::setBorderHeight(const float value)
{
    m_borderHeigh=value;
    update();
}

bool HeightMapBorderDrawer::updateData()
{
    /*
    m_lines = {
        {QVector3D(m_borderRect.x(), m_borderRect.y(), 0), QVector3D(1.0, 0.0, 0.0), QVector3D(sNan, sNan, sNan)},
        {QVector3D(m_borderRect.x(), m_borderRect.y() + m_borderRect.height(), 0), QVector3D(1.0, 0.0, 0.0), QVector3D(sNan, sNan, sNan)},
        {QVector3D(m_borderRect.x(), m_borderRect.y() + m_borderRect.height(), 0), QVector3D(1.0, 0.0, 0.0), QVector3D(sNan, sNan, sNan)},
        {QVector3D(m_borderRect.x() + m_borderRect.width(), m_borderRect.y() + m_borderRect.height(), 0), QVector3D(1.0, 0.0, 0.0), QVector3D(sNan, sNan, sNan)},
        {QVector3D(m_borderRect.x() + m_borderRect.width(), m_borderRect.y() + m_borderRect.height(), 0), QVector3D(1.0, 0.0, 0.0), QVector3D(sNan, sNan, sNan)},
        {QVector3D(m_borderRect.x() + m_borderRect.width(), m_borderRect.y(), 0), QVector3D(1.0, 0.0, 0.0), QVector3D(sNan, sNan, sNan)},
        {QVector3D(m_borderRect.x() + m_borderRect.width(), m_borderRect.y(), 0), QVector3D(1.0, 0.0, 0.0), QVector3D(sNan, sNan, sNan)},
        {QVector3D(m_borderRect.x(), m_borderRect.y(), 0), QVector3D(1.0, 0.0, 0.0), QVector3D(sNan, sNan, sNan)},
    };
    */
    // Clear data
    m_lines.clear();
    m_points.clear();

    // Prepare vertex
    VertexData vertex;
    vertex.start = QVector3D(sNan, sNan, m_pointSize);

    // Calculate grid parameters
    int gridPointsX =11;// m_model->columnCount();
    int gridPointsY =11;// m_model->rowCount();

    double gridStepX = gridPointsX > 1 ? m_borderRect.width() / (gridPointsX - 1) : 0;
    double gridStepY = gridPointsY > 1 ? m_borderRect.height() / (gridPointsY - 1) : 0;

    // Probe path / dots
    for (int i = -gridPointsY; i < gridPointsY; i++) {
        for (int j = -gridPointsX; j < gridPointsX; j++) {
                vertex.color = QVector3D(0.0, 0.0, 1.0);
                vertex.position = QVector3D(m_borderRect.x() + gridStepX * j,
                                            m_borderRect.y() + gridStepY * i,
                                            m_borderHeigh);
                m_points.append(vertex);
        }
    }

    // Horizontal grid lines
    vertex.color = QVector3D(0.0, 0.8, 1.0);
    for (int i = -gridPointsY; i < gridPointsY; i++) {
        for (int j = -gridPointsX; j < gridPointsX; j++) {
            //if (qIsNaN(m_model->data(m_model->index(i, j), Qt::UserRole).toDouble())) continue;

            vertex.position = QVector3D(m_borderRect.x() + gridStepX * (j - 1),
                                        m_borderRect.y() + gridStepY * i,
                                        m_borderHeigh);
            m_lines.append(vertex);

            vertex.position = QVector3D(m_borderRect.x() + gridStepX * j,
                                        m_borderRect.y() + gridStepY * i,
                                        m_borderHeigh);
            m_lines.append(vertex);
        }
    }

    // Vertical grid lines
    vertex.color = QVector3D(0.0, 0.8, 1.0);
    for (int j = -gridPointsX; j < gridPointsX; j++) {
        for (int i = -gridPointsY; i < gridPointsY; i++) {
            //if (qIsNaN(m_model->data(m_model->index(i, j), Qt::UserRole).toDouble())) continue;

            vertex.position = QVector3D(m_borderRect.x() + gridStepX * j,
                                        m_borderRect.y() + gridStepY * (i - 1),
                                        m_borderHeigh);
            m_lines.append(vertex);

            vertex.position = QVector3D(m_borderRect.x() + gridStepX * j,
                                        m_borderRect.y() + gridStepY * i,
                                        m_borderHeigh);
            m_lines.append(vertex);
        }
    }
    return true;
}


