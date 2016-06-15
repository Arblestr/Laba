#ifndef CREATORSCALING_H
#define CREATORSCALING_H
#include "Scaling.h"
#include "BaseCreator.h"

class CreatorScalingX: public BaseCreator
{
public:
    CreatorScalingX();
    CreatorScalingX(double Alpha);
    ~CreatorScalingX();

    virtual BaseChange* get_change();

private:
    double Alpha;

};

class CreatorScalingY: public BaseCreator
{
public:
    CreatorScalingY();
    CreatorScalingY(double Alpha);
    ~CreatorScalingY();

    virtual BaseChange* get_change();

private:
    double Alpha;

};

class CreatorScalingZ: public BaseCreator
{
public:
    CreatorScalingZ();
    CreatorScalingZ(double Alpha);
    ~CreatorScalingZ();

    virtual BaseChange* get_change();

private:
    double Alpha;

};

class CreatorScalingXYZ: public BaseCreator
{
public:
    CreatorScalingXYZ();
    CreatorScalingXYZ(double Alpha);
    ~CreatorScalingXYZ();

    virtual BaseChange* get_change();

private:
    double Alpha;

};

#endif // CREATORSCALING_H
