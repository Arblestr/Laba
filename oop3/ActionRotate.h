#ifndef ACTIONROTATE_H
#define ACTIONROTATE_H
#include "BaseAction.h"

class ActionRotateX: public BaseAction
{
public:
    ActionRotateX();
    ~ActionRotateX();
    ActionRotateX(double Angle, cPoint Center);

    virtual void make(BaseElement* Object);

private:
    double Angle;
    cPoint* Center;
};

class ActionRotateY: public BaseAction
{
public:
    ActionRotateY();
    ~ActionRotateY();
    ActionRotateY(double Angle, cPoint Center);

    virtual void make(BaseElement* Object);

private:
    double Angle;
    cPoint* Center;
};

class ActionRotateZ: public BaseAction
{
public:
    ActionRotateZ();
    ~ActionRotateZ();
    ActionRotateZ(double Angle, cPoint Center);

    virtual void make(BaseElement* Object);

private:
    double Angle;
    cPoint* Center;
};

#include "ActionRotateFuncs.h"
#endif // ACTIONROTATE_H
