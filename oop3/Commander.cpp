#include "CompositeError.h"
#include "Commander.h"

Commander :: Commander()
{
    this->Object = new cComposite;
    if (!this->Object)
    {
        throw CompositeMemoryError();
    }
}

Commander :: ~Commander()
{
    delete this->Object;
}

void Commander :: make(BaseAction& Action)
{
    Action.make(this->Object);
}
