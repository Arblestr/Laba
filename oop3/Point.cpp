#include "Point.h"
#include <cstddef>

cPoint :: cPoint()
{
}

cPoint :: cPoint(cVector vec)
{
    this->X = vec.get_X();
    this->Y = vec.get_Y();
    this->Z = vec.get_Z();
}

cPoint :: cPoint(double X, double Y, double Z)
{
    this->X = X;
    this->Y = Y;
    this->Z = Z;
}

cPoint :: ~cPoint()
{
}

cList<double> cPoint :: point_to_vector()
{
    cList<double> PointVec;
    PointVec.add_item(this->X);
    PointVec.add_item(this->Y);
    PointVec.add_item(this->Z);
    double L = 1;
    PointVec.add_item(L);
    return PointVec;
}

void cPoint :: set_X(double X)
{
    this->X = X;
}

void cPoint :: set_Y(double Y)
{
    this->Y = Y;
}

void cPoint :: set_Z(double Z)
{
    this->Z = Z;
}

double cPoint :: get_X()
{
    return this->X;
}

double cPoint :: get_Y()
{
    return this->Y;
}

double cPoint :: get_Z()
{
    return this->Z;
}

void cPoint :: change(BaseChange* ChangeType)
{
    ChangeType->run(this);
}
