#ifndef BASEFOUNDATIONPAINT_H
#define BASEFOUNDATIONPAINT_H

class cPoint;

class BaseFoundationPaint
{
    virtual void paint_line(cPoint* A, cPoint* B) = 0;
    virtual void set_color(int R, int G, int B) = 0;
    virtual void set_width(int W) = 0;
    virtual void clear() = 0;
};

#endif // BASEFOUNDATIONPAINT_H
