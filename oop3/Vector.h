#ifndef VECTOR_H
#define VECTOR_H

#include "List.h"
#include <math.h>

class cVector
{
public:
    cVector();
    cVector(double X, double Y, double Z);
    cVector(const cVector& constVector);
    cVector(cList<double> arr);
    ~cVector();

    void set_X(double X);
    void set_Y(double Y);
    void set_Z(double Z);
    void set_L(double L);

    double get_X() const;
    double get_Y() const;
    double get_Z() const;
    double get_L() const;

    double get_length();
    static double scalar_mult(cVector v1, cVector v2);
    double get_angle(cVector v1, cVector v2);

    cVector normalize();
    static cVector cross(cVector v1, cVector v2);

    cVector& operator=(const cList<double>& newv);
    //cVector& operator=(cList<double>&& newv);
    cList<double> getArray();

    double operator[](int);

private:
    cList<double> v;
};

#endif // VECTOR_H
