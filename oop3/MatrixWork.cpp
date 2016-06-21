#include "Iterator.h"
#include "MatrixWork.h"

matrixrotationOX :: matrixrotationOX(double angle) :
    Matrix<double>(4, 4)
{
    double cos_alpha = cos(angle);
    double sin_alpha = sin(angle);

    {
        cList<double> h = (*this)[0];
        cIterator<double> irow(h);
        irow[0].set_new_const(1);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[1];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(cos_alpha);
        irow[2].set_new_const(sin_alpha);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[2];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(-sin_alpha);
        irow[2].set_new_const(cos_alpha);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[3];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(1);
    }
}

matrixrotationOY :: matrixrotationOY(double angle) :
    Matrix<double>(4, 4)
{
    double cos_alpha = cos(angle);
    double sin_alpha = sin(angle);

    {
        cList<double> h = (*this)[0];
        cIterator<double> irow(h);
        irow[0].set_new_const(cos_alpha);
        irow[1].set_new_const(0);
        irow[2].set_new_const(sin_alpha);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[1];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(1);
        irow[2].set_new_const(0);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[2];
        cIterator<double> irow(h);
        irow[0].set_new_const(sin_alpha);
        irow[1].set_new_const(0);
        irow[2].set_new_const(cos_alpha);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[3];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(1);
    }
}

matrixrotationOZ :: matrixrotationOZ(double angle) :
    Matrix<double>(4, 4)
{
    double cos_alpha = cos(angle);
    double sin_alpha = sin(angle);

    {
        cList<double> h = (*this)[0];
        cIterator<double> irow(h);
        irow[0].set_new_const(cos_alpha);
        irow[1].set_new_const(sin_alpha);
        irow[2].set_new_const(0);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[1];
        cIterator<double> irow(h);
        irow[0].set_new_const(-sin_alpha);
        irow[1].set_new_const(cos_alpha);
        irow[2].set_new_const(0);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[2];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(1);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[3];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(1);
    }
}

matrixrotation :: matrixrotation(double x, double y, double z, double angle) :
    Matrix<double>(4, 4)
{
    double cos_alpha = cos(angle);
    double sin_alpha = sin(angle);

    {
        cList<double> h = (*this)[0];
        cIterator<double> irow(h);
        irow[0].set_new_const(cos_alpha + (1 - cos_alpha)*x*x);
        irow[1].set_new_const((1 - cos_alpha)*y*x + sin_alpha*z);
        irow[2].set_new_const((1 - cos_alpha)*z*x - sin_alpha*y);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[1];
        cIterator<double> irow(h);
        irow[0].set_new_const((1 - cos_alpha)*x*y - sin_alpha*z);
        irow[1].set_new_const(cos_alpha + (1 - cos_alpha)*y*y);
        irow[2].set_new_const((1 - cos_alpha)*z*y + sin_alpha*x);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[2];
        cIterator<double> irow(h);
        irow[0].set_new_const((1 - cos_alpha)*x*z + sin_alpha*y);
        irow[1].set_new_const((1 - cos_alpha)*y*z - sin_alpha*x);
        irow[2].set_new_const(cos_alpha + (1 - cos_alpha)*z*z);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[3];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(1);
    }
}

matrixmove :: matrixmove(double x, double y, double z) :
    Matrix<double>(4, 4)
{
    {
        cList<double> h = (*this)[0];
        cIterator<double> irow(h);
        irow[0].set_new_const(1);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(x);
    }

    {
        cList<double> h = (*this)[1];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(1);
        irow[2].set_new_const(0);
        irow[3].set_new_const(y);
    }

    {
        cList<double> h = (*this)[2];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(1);
        irow[3].set_new_const(z);
    }

    {
        cList<double> h = (*this)[3];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(1);
    }
}


matrixscale :: matrixscale(double s) :
    Matrix<double>(4, 4)
{
    {
        cList<double> h = (*this)[0];
        cIterator<double> irow(h);
        irow[0].set_new_const(s);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[1];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(s);
        irow[2].set_new_const(0);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[2];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(s);
        irow[3].set_new_const(0);
    }

    {
        cList<double> h = (*this)[3];
        cIterator<double> irow(h);
        irow[0].set_new_const(0);
        irow[1].set_new_const(0);
        irow[2].set_new_const(0);
        irow[3].set_new_const(1);
    }
}
