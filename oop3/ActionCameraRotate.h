#ifndef ACTIONCAMERAROTATE_H
#define ACTIONCAMERAROTATE_H
#include "BaseAction.h"


class ActionCameraPitch: public BaseAction
{
public:
    ActionCameraPitch();
    ~ActionCameraPitch();

    ActionCameraPitch(double Angle);

    virtual void make(BaseElement *Camera);

private:
    double Angle;
};

class ActionCameraYaw: public BaseAction
{
public:
    ActionCameraYaw();
    ~ActionCameraYaw();

    ActionCameraYaw(double Angle);

    virtual void make(BaseElement *Camera);

private:
    double Angle;
};

class ActionCameraRoll: public BaseAction
{
public:
    ActionCameraRoll();
    ~ActionCameraRoll();

    ActionCameraRoll(double Angle);

    virtual void make(BaseElement *Camera);

private:
    double Angle;
};

#include "ActionCameraRotateFuncs.h"

#endif // ACTIONCAMERAROTATE_H
