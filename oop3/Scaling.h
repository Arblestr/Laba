#ifndef SCALING_H
#define SCALING_H

#include "BaseScaling.h"

class ScalingX: public Scaling
{
public:
    ScalingX();
    ScalingX(double Alpha);
    ~ScalingX();

    virtual void run(cPoint* Point);
};

class ScalingY : public Scaling
{
public:
    ScalingY();
    ScalingY(double Alpha);
    ~ScalingY();

    virtual void run(cPoint*);
};

class ScalingZ : public Scaling
{
public:
    ScalingZ();
    ScalingZ(double Alpha);
    ~ScalingZ();

    virtual void run(cPoint*);
};

class ScalingXYZ : public Scaling
{
public:
    ScalingXYZ();
    ScalingXYZ(double Alpha);
    ~ScalingXYZ();

    virtual void run(cPoint*);
};

#include "ScalingFuncs.h"

#endif // SCALING_H
