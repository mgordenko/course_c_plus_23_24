#include "renderarea.h"

#include <QPainter>

RenderArea::RenderArea(QWidget* parent)
    : QWidget(parent),
      _levels(2)
{

}

void RenderArea::setLevels(int lvls)
{
    _levels = lvls;
    
    // update() repaints the widget on the next frame
    // If you change something visual about a widget, only
    // internal variables get changed, but you still
    // see the old visuals.
    // This function recalculates and redraws the look
    // of a widget.
    // https://doc.qt.io/qt-6/qwidget.html#update
    update();
}

void RenderArea::paintEvent(QPaintEvent* /* event */)
{
    // Initialize painter, the object that draws primitive shapes
    QPainter painter(this);
    // Set fill color to gray
    painter.setBrush(Qt::GlobalColor::gray);
    
    // ask painter object to draw a rectangle
    // first, convert (x, y, widht, height) to a QRect object
    // then pass this object to painter.
    painter.drawRect(QRect(0, 0, this->width() - 1, this->height() - 1));


    // Set fill color to blue and line color to red
    QBrush figBrush(Qt::GlobalColor::blue);
    QPen figPen(Qt::GlobalColor::red);
    painter.setBrush(figBrush);
    painter.setPen(figPen);


    // Code to draw Cantor Fractal.

    // Task:
    // Convert this code to a function that takes a painter object and the number of levels
    int newHeight = 15;
    
    painter.drawRect(0, 0, width(), newHeight);
    
    if (_levels > 1)
    {
        //               x                y                width       height
        painter.drawRect(0,               newHeight * 2, width() / 3, newHeight);
        painter.drawRect(width() * 2 / 3, newHeight * 2, width() / 3, newHeight);
    }
    
}
