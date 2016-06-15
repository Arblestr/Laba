#ifndef BASEELEMENT_H
#define BASEELEMENT_H

class BaseElementChange;

class BaseElement
{
public:
    virtual void change(BaseElementChange* ChangeType) {}
};

#endif // BASEELEMENT_H
