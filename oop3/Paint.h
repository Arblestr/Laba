#ifndef PAINT_H
#define PAINT_H
#include "BasePaint.h"

class Paint : public BasePaint
{
public:
    Paint(FoundationPaint* FoundationPaintObject);
    ~Paint();
    virtual void paint_model(cModel* Model, cCamera* Camera);

private:
    FoundationPaint* FoundationPaintObject;
};

#endif // PAINT_H
