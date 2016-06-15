#ifndef BASEMOVING_H
#define BASEMOVING_H

#include "BaseChange.h"
#include "Point.h"

class Moving: public BaseChange
{
public:

    void X_Moving(cPoint* Point);
    void Y_Moving(cPoint* Point);
    void Z_Moving(cPoint* Point);

    virtual void run(cPoint* Point) = 0;

protected:
    double Delta;
    //cPoint* Center;
};

#include "BaseMovingFuncs.h"

#endif // BASEMOVING_H
