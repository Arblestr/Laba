#ifndef BASEELEMENT_H
#define BASEELEMENT_H

class BaseElementChange;

class BaseElement
{
public:
    virtual void change(BaseElementChange* ChangeType) = 0;
    virtual void add(BaseElement* BaseElementObject) {}
};

#endif // BASEELEMENT_H
