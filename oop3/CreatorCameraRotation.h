#ifndef CREATORCAMERAROTATION_H
#define CREATORCAMERAROTATION_H
#include "BaseCreator.h"
#include "BaseElementChange.h"
#include "CameraRotation.h"


class CreatorCameraPitch: public BaseCreator
{
public:
    CreatorCameraPitch();
    CreatorCameraPitch(double Angle);
    ~CreatorCameraPitch();

    virtual BaseElementChange* get_change();

private:
    double Angle;

};


class CreatorCameraYaw: public BaseCreator
{
public:
    CreatorCameraYaw();
    CreatorCameraYaw(double Angle);
    ~CreatorCameraYaw();

    virtual BaseElementChange* get_change();

private:
    double Angle;

};


class CreatorCameraRoll: public BaseCreator
{
public:
    CreatorCameraRoll();
    CreatorCameraRoll(double Angle);
    ~CreatorCameraRoll();

    virtual BaseElementChange* get_change();

private:
    double Angle;

};

#endif // CREATORCAMERAROTATION_H
