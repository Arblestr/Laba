#include "CompositeError.h"
#include "Commander.h"

Commander :: Commander()
{
    this->Object = new cComposite;
    if (!this->Object)
    {
        throw CompositeMemoryError();
    }

    this->Camera = new cComposite;
    if (!this->Camera)
    {
        throw CompositeMemoryError();
    }

    cPoint* point1 = new cPoint(100, 100, 100);
    cPoint* point2 = new cPoint(0, 0, 0);
    cCamera* cam = new cCamera(point1, point2, 0, 0, 0);
    this->Camera->add(cam);
}



Commander :: ~Commander()
{
    delete this->Object;
    delete this->Camera;
}

void Commander :: make(BaseAction& Action, int Index)
{
    Action.make(this->Object, this->Camera, Index);
}
