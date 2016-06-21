#include "BaseChangeError.h"
#include "CreatorRotation.h"
CreatorRotationX :: CreatorRotationX()
{
}

CreatorRotationX :: ~CreatorRotationX()
{
}

CreatorRotationX :: CreatorRotationX(double Angle, cPoint* Center)
{
    this->Center = Center;
    this->Angle = Angle;
}

BaseChange* CreatorRotationX :: get_change()
{
    BaseChange* RotationXChange = new RotationX(this->Angle,this->Center);

    if (!RotationXChange)
    {
        throw ChangeMemoryError();
    }

    return RotationXChange;
}


CreatorRotationY :: CreatorRotationY()
{
}

CreatorRotationY :: ~CreatorRotationY()
{
}

CreatorRotationY :: CreatorRotationY(double Angle, cPoint* Center)
{
    this->Center = Center;
    this->Angle = Angle;
}

BaseChange* CreatorRotationY :: get_change()
{
    BaseChange* RotationYChange = new RotationY(this->Angle,this->Center);

    if (!RotationYChange)
    {
        throw ChangeMemoryError();
    }

    return RotationYChange;
}


CreatorRotationZ :: CreatorRotationZ()
{
}

CreatorRotationZ :: ~CreatorRotationZ()
{
}

CreatorRotationZ :: CreatorRotationZ(double Angle, cPoint* Center)
{
    this->Center = Center;
    this->Angle = Angle;
}

BaseChange* CreatorRotationZ :: get_change()
{
    BaseChange* RotationZChange = new RotationZ(this->Angle,this->Center);

    if (!RotationZChange)
    {
        throw ChangeMemoryError();
    }

    return RotationZChange;
}
