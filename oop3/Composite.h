#ifndef COMPOSITE_H
#define COMPOSITE_H
#include "BaseClass.h"

class cComposite: public BaseClass
{
public:
    cComposite();
    ~cComposite();

    virtual void change(BaseChange* ChangeType);
    virtual void add(BaseClass* BaseClassObject);

    void clear();

    cList<BaseClass*> Objects;
};

#include "CompositeFuncs.h"

#endif // COMPOSITE_H
