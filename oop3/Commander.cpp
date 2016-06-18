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
