#ifndef ACTIONMOVE_H
#define ACTIONMOVE_H
#include "BaseAction.h"

class ActionMoveX: public BaseAction
{
public:
    ActionMoveX();
    ~ActionMoveX();
    ActionMoveX(double Delta);

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index);

private:
    double Delta;
};

class ActionMoveY: public BaseAction
{
public:
    ActionMoveY();
    ~ActionMoveY();
    ActionMoveY(double Delta);

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index);

private:
    double Delta;
};

class ActionMoveZ: public BaseAction
{
public:
    ActionMoveZ();
    ~ActionMoveZ();
    ActionMoveZ(double Delta);

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index);

private:
    double Delta;
};

#endif // ACTIONMOVE_H
