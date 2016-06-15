#ifndef PAINT_H
#define PAINT_H
#include "BasePaint.h"

class Paint : public BasePaint
{
public:
    Paint(FoundationPaint* FoundationPaint);
    ~Paint();
    virtual void paint_model(cModel& Model, cCamera& Camera);

private:
    FoundationPaint* FoundationPaint;
};

#endif // PAINT_H
