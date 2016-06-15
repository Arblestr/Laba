#ifndef ACTIONMOVEFUNCS_H
#define ACTIONMOVEFUNCS_H

#include "BaseCreatorError.h"

ActionMoveX :: ActionMoveX()
{
}

ActionMoveX :: ActionMoveX(double Delta)
{
    this->Delta = Delta;

}

ActionMoveX :: ~ActionMoveX()
{
}

void ActionMoveX :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationX(this->Delta);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}


ActionMoveY :: ActionMoveY()
{
}

ActionMoveY :: ActionMoveY(double Delta)
{
    this->Delta = Delta;

}

ActionMoveY :: ~ActionMoveY()
{
}

void ActionMoveY :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationY(this->Delta);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}


ActionMoveZ :: ActionMoveZ()
{
}

ActionMoveZ :: ActionMoveZ(double Delta)
{
    this->Delta = Delta;

}

ActionMoveZ :: ~ActionMoveZ()
{
}

void ActionMoveZ :: make(BaseElement* Object)
{
    BaseCreator* ChangeType = new CreatorRotationZ(this->Delta);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Object->change(ChangeType->get_change());
}

#endif // ACTIONMOVEFUNCS_H
