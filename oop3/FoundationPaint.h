#ifndef FOUNDATIONPAINT_H
#define FOUNDATIONPAINT_H
#include "BaseFoundationPaint.h"
#include "QGraphicsView"
#include "QPen"
#include "Point.h"

class FoundationPaint: public BaseFoundationPaint
{
public:
    FoundationPaint(QGraphicsScene* Scene);
    ~FoundationPaint();

    virtual void paint_line(cPoint A, cPoint B);
    virtual void set_color(int R, int G, int B);
    virtual void set_width(int W);
    virtual void clear();

private:
    QGraphicsScene* Scene;
    QPen Pen;
};

#include "BaseFoundationPaintFuncs.h"

#endif // FOUNDATIONPAINT_H
