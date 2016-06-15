#ifndef CREATORMOVING_H
#define CREATORMOVING_H
#include "Moving.h"
#include "BaseCreator.h"

class CreatorMovingX: public BaseCreator
{
public:
    CreatorMovingX();
    CreatorMovingX(double Delta);
    ~CreatorMovingX();

    virtual BaseChange* get_change();

private:
    double Delta;

};

class CreatorMovingY: public BaseCreator
{
public:
    CreatorMovingY();
    CreatorMovingY(double Delta);
    ~CreatorMovingY();

    virtual BaseChange* get_change();

private:
    double Delta;

};

class CreatorMovingZ: public BaseCreator
{
public:
    CreatorMovingZ();
    CreatorMovingZ(double Delta);
    ~CreatorMovingZ();

    virtual BaseChange* get_change();

private:
    double Delta;

};

#include "CreatorMovingFuncs.h"
#endif // CREATORMOVING_H
