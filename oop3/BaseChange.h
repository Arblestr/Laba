#ifndef BASECHANGE_H
#define BASECHANGE_H
#include "BaseElementChange.h"

#include "Point.h"

class BaseChange: public BaseElementChange
{
public:
    BaseChange() {}
    ~BaseChange() {}

    virtual void run(cPoint* Point) = 0;
};


#endif // BASECHANGE_H