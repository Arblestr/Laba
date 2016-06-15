#ifndef BASEPAINT_H
#define BASEPAINT_H
#include "Model.h"
#include "Camera.h"
#include "FoundationPaint.h"

class BasePaint
{
public:
    virtual void paint_model(cModel& Model, cCamera& Camera) = 0;

protected:
    FoundationPaint* FoundationPaintObject;
};

#endif // BASEPAINT_H
