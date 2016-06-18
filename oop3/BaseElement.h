#ifndef BASEELEMENT_H
#define BASEELEMENT_H

class BaseElementChange;

class BaseElement
{
public:
    virtual void change(BaseElementChange* ChangeType) {}
    virtual void add(BaseElement* BaseElementObject) {}

    virtual bool IsComposite()
    {
        return false;
    }
};

#endif // BASEELEMENT_H
