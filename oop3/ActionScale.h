#ifndef ACTIONSCALE_H
#define ACTIONSCALE_H
#include "BaseAction.h"

class ActionScaleX: public BaseAction
{
public:
    ActionScaleX();
    ~ActionScaleX();
    ActionScaleX(double Alpha);

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index);

private:
    double Alpha;
};

class ActionScaleY: public BaseAction
{
public:
    ActionScaleY();
    ~ActionScaleY();
    ActionScaleY(double Alpha);

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index);

private:
    double Alpha;
};

class ActionScaleZ: public BaseAction
{
public:
    ActionScaleZ();
    ~ActionScaleZ();
    ActionScaleZ(double Alpha);

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index);

private:
    double Alpha;
};

class ActionScaleXYZ: public BaseAction
{
public:
    ActionScaleXYZ();
    ~ActionScaleXYZ();
    ActionScaleXYZ(double Alpha);

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index);

private:
    double Alpha;
};

#endif // ACTIONSCALE_H
