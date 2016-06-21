#ifndef BASECLASS_H
#define BASECLASS_H
#include "List.h"
#include "BaseChange.h"
#include "BaseElement.h"

class BaseClass: public BaseElement
{
public:
    virtual void change(BaseChange* ChangeType) = 0;
    virtual void add(BaseClass* BaseClassObject){}

    virtual void change(BaseElementChange* mod)
    {
        this->change((BaseChange*)mod);
    }
};

#endif // BASECLASS_H
