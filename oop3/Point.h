#ifndef POINT_H
#define POINT_H
#include "List.h"
#include "BaseClass.h"
#include "Vector.h"

class cPoint: public BaseClass
{
public:
    cPoint();
    cPoint(cVector V);
    cPoint(double X, double Y, double Z);

    ~cPoint();

    void set_X(double X);
    void set_Y(double Y);
    void set_Z(double Z);

    double get_X();
    double get_Y();
    double get_Z();

    cList<double> point_to_vector();

    virtual void change(BaseChange* ChangeType);

private:
    double X;
    double Y;
    double Z;

};

#endif // POINT_H
