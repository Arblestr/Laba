#ifndef COMPOSITE_H
#define COMPOSITE_H
#include "BaseClass.h"

class cComposite: public BaseElement
{
public:
    cComposite();
    ~cComposite();

    virtual void change(BaseChange* ChangeType);
    virtual void add(BaseElement* BaseElementObject);

    void clear();
    virtual bool IsComposite()
    {
        return true;
    }

    cList<BaseElement*> Objects;
};

#endif // COMPOSITE_H
