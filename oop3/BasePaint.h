#ifndef BASEPAINT_H
#define BASEPAINT_H
#include "Model.h"
#include "Camera.h"
#include "FoundationPaint.h"

class BasePaint
{
public:
    virtual void paint_model(cModel& Model, cCamera7 Camera) = 0;

protected:
    FoundationPaint* FoundationPaint;
};

#endif // BASEPAINT_H
