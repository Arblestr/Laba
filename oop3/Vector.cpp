#include "Vector.h"
#include "VectorError.h"
#include <cstddef>

cVector :: cVector()//
{
    double Init = 0;
    this->v.add_item(Init);
    this->v.add_item(Init);
    this->v.add_item(Init);
    this->v.add_item(Init);
}

cVector :: cVector(double X, double Y, double Z)//
{
    this->v.add_item(X);
    this->v.add_item(Y);
    this->v.add_item(Z);
    double Len = 1;
    this->v.add_item(Len);
}

cVector :: ~cVector()//
{
    this->v.clear();
}

void cVector :: set_X(double X)//
{
    cIterator<double> IterForVec(this->v);
    IterForVec.set_new(X);
}

void cVector :: set_Y(double Y)//
{
    cIterator<double> IterForVec(this->v);
    IterForVec.go_to_next();
    IterForVec.set_new(Y);
}


void cVector :: set_Z(double Z)//
{
    cIterator<double> IterForVec(this->v);
    IterForVec.go_to_next();
    IterForVec.go_to_next();
    IterForVec.set_new(Z);
}

void cVector :: set_L(double L)//
{
    cIterator<double> IterForVec(this->v);
    IterForVec.go_to_next();
    IterForVec.go_to_next();
    IterForVec.go_to_next();
    IterForVec.set_new(L);
}

double cVector :: get_length()//
{
    if (this->v.get_count() != 4)
    {
        throw VectorLengthError();
    }
    cIterator<double> IterForVec(this->v);
    double X = IterForVec.get_value();
    IterForVec.go_to_next();
    double Y = IterForVec.get_value();
    IterForVec.go_to_next();
    double Z = IterForVec.get_value();

    return sqrt(X*X + Y*Y + Z*Z);
}

double cVector :: scalar_mult(cVector v1, cVector v2)//
{
    if (v1.v.get_count() != 4 || v2.v.get_count() != 4)
        throw VectorLengthError();

    cIterator<double> IterForVec1(v1.v);
    cIterator<double> IterForVec2(v2.v);

    double X1 = IterForVec1.get_value();
    IterForVec1.go_to_next();
    double Y1 = IterForVec1.get_value();
    IterForVec1.go_to_next();
    double Z1 = IterForVec1.get_value();

    double X2 = IterForVec2.get_value();
    IterForVec2.go_to_next();
    double Y2 = IterForVec2.get_value();
    IterForVec2.go_to_next();
    double Z2 = IterForVec2.get_value();

    return	(X1 * X2  + Y1 * Y2 + Z1 * Z2);
}


double cVector :: get_angle(cVector v1, cVector v2)//
{
    if (v1.v.get_count() != 4 || v2.v.get_count() != 4)
        throw VectorLengthError();

    return (this->scalar_mult(v1, v2) / (v1.get_length() * v2.get_length()));
}

cVector cVector :: normalize()
{
    if (this->v.get_count() != 4)
        throw VectorLengthError();

    double norm = (1 / (this->get_length()));

    cIterator<double> IterForVec(this->v);

    while (!IterForVec.IsNullIter())
    {
        double nv = IterForVec.get_value() * norm;
        IterForVec.set_new(nv);
        IterForVec.go_to_next();
    }

    return (*this);
}

cVector& cVector :: operator= (cList<double>& newv)
{
    if (newv.get_count() != 4)
        throw VectorLengthError();

    cIterator<double> IterForVec1(this->v);
    cIterator<double> IterForVec2(newv);

    while (!IterForVec2.IsNullIter())
    {
        IterForVec1.set_new(IterForVec2.get_value());
        IterForVec1.go_to_next();
        IterForVec2.go_to_next();
    }

    return (*this);
}

/*cVector& cVector :: operator= (cList<double>&& newv)
{
    if (newv.get_count() != 4)
        throw VectorLengthError();

    cIterator<double> IterForVec1(this->v);
    cIterator<double> IterForVec2(newv);

    while (!IterForVec2.IsNullIter())
    {
        IterForVec1.set_new(IterForVec2.get_value());
        IterForVec1.go_to_next();
        IterForVec2.go_to_next();
    }

    return (*this);
}*/
