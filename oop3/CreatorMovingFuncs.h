#ifndef CREATORMOVINGFUNCS_H
#define CREATORMOVINGFUNCS_H

#include "BaseChangeError.h"


CreatorMovingX :: CreatorMovingX()
{
}

CreatorMovingX :: ~CreatorMovingX()
{
}

CreatorMovingX :: CreatorMovingX(double Delta)
{
    this->Delta = Delta;
}

BaseChange* CreatorMovingX :: get_change()
{
    BaseChange* MovingXChange = new MovingX(this->Delta);

    if (!MovingXChange)
    {
        throw ChangeMemoryError();
    }

    return MovingXChange;
}



CreatorMovingY :: CreatorMovingY()
{
}

CreatorMovingY :: ~CreatorMovingY()
{
}

CreatorMovingY :: CreatorMovingY(double Delta)
{
    this->Delta = Delta;
}

BaseChange* CreatorMovingY :: get_change()
{
    BaseChange* MovingYChange = new MovingY(this->Delta);

    if (!MovingYChange)
    {
        throw ChangeMemoryError();
    }

    return MovingYChange;
}



CreatorMovingZ :: CreatorMovingZ()
{
}

CreatorMovingZ :: ~CreatorMovingZ()
{
}

CreatorMovingZ :: CreatorMovingZ(double Delta)
{
    this->Delta = Delta;
}

BaseChange* CreatorMovingZ :: get_change()
{
    BaseChange* MovingZChange = new MovingZ(this->Delta);

    if (!MovingZChange)
    {
        throw ChangeMemoryError();
    }

    return MovingZChange;
}


#endif // CREATORMOVINGFUNCS_H
