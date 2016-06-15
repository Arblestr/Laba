#ifndef BASEROTATION_H
#define BASEROTATION_H

#include "BaseChange.h"
#include "Point.h"

class Rotation: public BaseChange
{
public:

    void X_Rotation(cPoint* PointToRotate);
    void Y_Rotation(cPoint* PointToRotate);
    void Z_Rotation(cPoint* PointToRotate);

    virtual void run(cPoint* PointToRotate) = 0;

protected:
    double Angle;
    cPoint* Center;
};

#include "BaseRotationFuncs.h"

#endif // BASEROTATION_H
