// This file is a part of "Candle" application.
// Copyright 2015-2016 Hayrullin Denis Ravilevich

#ifndef HEIGHTMAPBORDERDRAWER_H
#define HEIGHTMAPBORDERDRAWER_H

#include <QObject>
#include "shaderdrawable.h"

class HeightMapBorderDrawer : public ShaderDrawable
{
public:
    HeightMapBorderDrawer();

    QRectF borderRect() const;
    void setBorderRect(const QRectF &borderRect);
    void setBorderHeight(const float value);

protected:
    bool updateData();

private:
    QRectF m_borderRect;
    float m_borderHeigh;
};

#endif // HEIGHTMAPBORDERDRAWER_H
