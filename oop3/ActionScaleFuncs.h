#ifndef ACTIONSCALEFUNCS_H
#define ACTIONSCALEFUNCS_H
#include "BaseCreatorError.h"

ActionScaleX :: ActionScaleX()
{
}

ActionScaleX :: ActionScaleX(double Alpha)
{
    this->Alpha = Alpha;

}

ActionScaleX :: ~ActionScaleX()
{
}

void ActionScaleX :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationX(this->Alpha);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}


ActionScaleY :: ActionScaleY()
{
}

ActionScaleY :: ActionScaleY(double Alpha)
{
    this->Alpha = Alpha;

}

ActionScaleY :: ~ActionScaleY()
{
}

void ActionScaleY :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationY(this->Alpha);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}


ActionScaleZ :: ActionScaleZ()
{
}

ActionScaleZ :: ActionScaleZ(double Alpha)
{
    this->Alpha = Alpha;

}

ActionScaleZ :: ~ActionScaleZ()
{
}

void ActionScaleZ :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationZ(this->Alpha);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}

ActionScaleXYZ :: ActionScaleXYZ()
{
}

ActionScaleXYZ :: ActionScaleXYZ(double Alpha)
{
    this->Alpha = Alpha;

}

ActionScaleXYZ :: ~ActionScaleXYZ()
{
}

void ActionScaleXYZ :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationXYZ(this->Alpha);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}

#endif // ACTIONSCALEFUNCS_H
