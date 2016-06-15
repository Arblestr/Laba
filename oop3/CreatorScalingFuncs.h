#ifndef CREATORSCALINGFUNCS_H
#define CREATORSCALINGFUNCS_H
#include "BaseChangeError.h"


CreatorScalingX :: CreatorScalingX()
{
}

CreatorScalingX :: ~CreatorScalingX()
{
}

CreatorScalingX :: CreatorScalingX(double Alpha)
{
    this->Alpha = Alpha;
}

BaseChange* CreatorScalingX :: get_change()
{
    BaseChange* ScalingXChange = new ScalingX(this->Alpha);

    if (!ScalingXChange)
    {
        throw ChangeMemoryError();
    }

    return ScalingXChange;
}



CreatorScalingY :: CreatorScalingY()
{
}

CreatorScalingY :: ~CreatorScalingY()
{
}

CreatorScalingY :: CreatorScalingY(double Alpha)
{
    this->Alpha = Alpha;
}

BaseChange* CreatorScalingY :: get_change()
{
    BaseChange* ScalingYChange = new ScalingY(this->Alpha);

    if (!ScalingYChange)
    {
        throw ChangeMemoryError();
    }

    return ScalingYChange;
}



CreatorScalingZ :: CreatorScalingZ()
{
}

CreatorScalingZ :: ~CreatorScalingZ()
{
}

CreatorScalingZ :: CreatorScalingZ(double Alpha)
{
    this->Alpha = Alpha;
}

BaseChange* CreatorScalingZ :: get_change()
{
    BaseChange* ScalingZChange = new ScalingZ(this->Alpha);

    if (!ScalingZChange)
    {
        throw ChangeMemoryError();
    }

    return ScalingZChange;
}



CreatorScalingXYZ :: CreatorScalingXYZ()
{
}

CreatorScalingXYZ :: ~CreatorScalingXYZ()
{
}

CreatorScalingXYZ :: CreatorScalingXYZ(double Alpha)
{
    this->Alpha = Alpha;
}

BaseChange* CreatorScalingXYZ :: get_change()
{
    BaseChange* ScalingXYZChange = new ScalingXYZ(this->Alpha);

    if (!ScalingXYZChange)
    {
        throw ChangeMemoryError();
    }

    return ScalingXYZChange;
}


#endif // CREATORSCALINGFUNCS_H
