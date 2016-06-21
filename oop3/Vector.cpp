#include "Vector.h"
#include "VectorError.h"
#include <cstddef>

cVector::cVector(cList<double> arr)
{
    if (arr.get_count() != 4)
    {
        //throw VectorSourceSizeError(); // Need add exception file with thouse errors
    }
    cIterator<double> iarr(arr);
    while (!iarr.IsNullIter())
    {
        this->v.add_item(iarr.get_value());
        iarr.go_to_next();
    }
}

cList<double> cVector::getArray()
{
    cList<double> tmp;
    double x = this->get_X();
    double y = this->get_Y();
    double z = this->get_Z();
    double l = this->get_L();
    tmp.add_item(x);
    tmp.add_item(y);
    tmp.add_item(z);
    tmp.add_item(l);
    return tmp;
}

double cVector::operator[](int Index)
{
    cConstIterator<double> viterator(this->v);
    //viterator.getByCount(index);
    int i = 0;
    while(i < Index)
    {
        viterator.go_to_next();
        i++;
    }
    return viterator.get_value();
}

cVector cVector::cross(cVector vec1, cVector vec2)
{
    cVector tmp;
    tmp.set_X(vec1.get_Z() * vec2.get_Y() - vec1.get_Y() * vec2.get_Z());
    tmp.set_Y(vec1.get_X() * vec2.get_Z() - vec1.get_Z() * vec2.get_X());
    tmp.set_Z(vec1.get_Y() * vec2.get_X() - vec1.get_X() * vec2.get_Y());
    return tmp;
}

cVector :: cVector(const cVector& constVector)
{
    double X = constVector.get_X();
    double Y = constVector.get_Y();
    double Z = constVector.get_Z();
    double L = constVector.get_L();
    this->v.add_item(X);
    this->v.add_item(Y);
    this->v.add_item(Z);
    this->v.add_item(L);
}

double cVector :: get_X() const
{
    cConstIterator<double> IterForV(this->v);
    return IterForV.get_value();
}

double cVector :: get_Y() const
{
    cConstIterator<double> IterForV(this->v);
    IterForV.go_to_next();
    return IterForV.get_value();
}

double cVector :: get_Z() const
{
    cConstIterator<double> IterForV(this->v);
    IterForV.go_to_next();
    IterForV.go_to_next();
    return IterForV.get_value();
}

double cVector :: get_L() const
{
    cConstIterator<double> IterForV(this->v);
    IterForV.go_to_next();
    IterForV.go_to_next();
    IterForV.go_to_next();
    return IterForV.get_value();
}

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

    double rez = sqrt(X*X + Y*Y + Z*Z);
    return rez;
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

    double norm = 1 / (*this).get_length();

    cIterator<double> IterForVec(this->v);

    int i = 0;
    while (i < 3)
    {
        i++;
        double nv = IterForVec.get_value() * norm;
        IterForVec.set_new(nv);
        IterForVec.go_to_next();
    }

    return (*this);
}

cVector& cVector :: operator= (const cList<double>& newv)
{
    if (newv.get_count() != 4)
        throw VectorLengthError();

    cIterator<double> IterForVec1(this->v);
    cConstIterator<double> IterForVec2(newv);

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
