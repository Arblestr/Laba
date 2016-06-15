#ifndef ROTATION_H
#define ROTATION_H
#include "BaseRotation.h"

class RotationX : public Rotation
{
public:
    RotationX();
    RotationX(double Angle, cPoint* Center);
    ~RotationX();

    virtual void run(cPoint* PointToRotate);
};

class RotationY : public Rotation
{
public:
    RotationY();
    RotationY(double Angle, cPoint* Center);
    ~RotationY();

    virtual void run(cPoint* PointToRotate);
};

class RotationZ : public Rotation
{
public:
    RotationZ();
    RotationZ(double Angle, cPoint* Center);
    ~RotationZ();

    virtual void run(cPoint* PointToRotate);
};

#include "RotationFuncs.h"

#endif // ROTATION_H
