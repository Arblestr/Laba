#ifndef VECTOR_H
#define VECTOR_H

#include "List.h"
#include <math.h>

class cVector
{
public:
    cVector();
    cVector(double X, double Y, double Z);
    ~cVector();

    void set_X(double X);
    void set_Y(double Y);
    void set_Z(double Z);
    void set_L(double L);

    double get_length();
    double scalar_mult(cVector v1, cVector v2);
    double get_angle(cVector v1, cVector v2);

    cVector normalize();
    //Vector cross(Vector v1, Vector v2);

    cVector& operator=(cList<double>& newv);
    //cVector& operator=(cList<double>&& newv);

private:
    cList<double> v;
};

#endif // VECTOR_H
