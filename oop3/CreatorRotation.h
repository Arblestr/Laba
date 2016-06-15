#ifndef CREATORROTATION_H
#define CREATORROTATION_H
#include "Rotation.h"
#include "BaseCreator.h"

class CreatorRotationX: public BaseCreator
{
public:
    CreatorRotationX();
    CreatorRotationX(double Angle, cPoint* Center);
    ~CreatorRotationX();

    virtual BaseChange* get_change();

private:
    double Angle;
    cPoint* Center;

};

class CreatorRotationY: public BaseCreator
{
public:
    CreatorRotationY();
    CreatorRotationY(double Angle, cPoint* Center);
    ~CreatorRotationY();

    virtual BaseChange* get_change();

private:
    double Angle;
    cPoint* Center;

};

class CreatorRotationZ: public BaseCreator
{
public:
    CreatorRotationZ();
    CreatorRotationZ(double Angle, cPoint* Center);
    ~CreatorRotationZ();

    virtual BaseChange* get_change();

private:
    double Angle;
    cPoint* Center;

};

#include "CreatorRotationFuncs.h"

#endif // CREATORROTATION_H
