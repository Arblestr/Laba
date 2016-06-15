#ifndef ACTIONROTATEFUNCS_H
#define ACTIONROTATEFUNCS_H
#include "BaseCreatorError.h"

ActionRotateX :: ActionRotateX()
{
}

ActionRotateX :: ActionRotateX(double Angle, cPoint Center)
{
    this->Angle = Angle;
    this->Center = &Center;
}

ActionRotateX :: ~ActionRotateX()
{
}

void ActionRotateX :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationX(this->Angle,this->Center);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}


ActionRotateY :: ActionRotateY()
{
}

ActionRotateY :: ActionRotateY(double Angle, cPoint Center)
{
    this->Angle = Angle;
    this->Center = &Center;
}

ActionRotateY :: ~ActionRotateY()
{
}

void ActionRotateY :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationY(this->Angle,this->Center);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}


ActionRotateZ :: ActionRotateZ()
{
}

ActionRotateZ :: ActionRotateZ(double Angle, cPoint Center)
{
    this->Angle = Angle;
    this->Center = &Center;
}

ActionRotateZ :: ~ActionRotateZ()
{
}

void ActionRotateZ :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationZ(this->Angle,this->Center);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}

#endif // ACTIONROTATEFUNCS_H
