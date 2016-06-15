#ifndef BASESCALING_H
#define BASESCALING_H

#include "BaseChange.h"
#include "Point.h"

class Scaling: public BaseChange
{
public:

    void X_Scaling(cPoint* Point);
    void Y_Scaling(cPoint* Point);
    void Z_Scaling(cPoint* Point);
    void XYZ_Scaling(cPoint* Point);

    virtual void run(cPoint* Point) = 0;

protected:
    double Alpha;
};

#include "BaseScalingFuncs.h"

#endif // BASESCALING_H
