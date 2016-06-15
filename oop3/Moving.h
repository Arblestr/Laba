#ifndef MOVING_H
#define MOVING_H

#include "BaseMoving.h"

class MovingX : public Moving
{
public:
    MovingX();
    MovingX(double Delta);
    ~MovingX();

    virtual void run(cPoint*);
};

class MovingY : public Moving
{
public:
    MovingY();
    MovingY(double Delta);
    ~MovingY();

    virtual void run(cPoint*);
};

class MovingZ : public Moving
{
public:
    MovingZ();
    MovingZ(double Delta);
    ~MovingZ();

    virtual void run(cPoint*);
};

#include "MovingFuncs.h"

#endif // MOVING_H
