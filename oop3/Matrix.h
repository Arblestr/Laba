#ifndef MATRIX_H
#define MATRIX_H

#include "List.h"
#include "Vector.h"
#include "Iterator.h"

class BaseMatrix
{
public:
    virtual const int& rowcount() = 0;
    virtual const int& columncount() = 0;

    virtual const int& rowcount() const = 0;
    virtual const int& columncount() const = 0;
protected:
    int _rowcount;
    int _columncount;
};

template <typename T>
class Matrix : public BaseMatrix
{
public:
    Matrix();
    Matrix(Matrix<T>&);
    void ravn(Matrix<T>);
    Matrix(int, int);

    virtual const int& rowcount()
    {
        return _rowcount;
    }
    virtual const int& columncount()
    {
        return _columncount;
    }

    void addColumn(cList<T>&);
    void addRow(cList<T>&);

    void setRow(int, cList<T>);
    void setColumn(int, cList<T>);

    virtual const int& rowcount() const
    {
        return _rowcount;
    }
    virtual const int& columncount() const
    {
        return _columncount;
    }

    void setRowCount(int);
    void setColCount(int);

    Matrix<T>& operator=  (const Matrix<T>&);
    //Matrix<T>& operator=  (Matrix<T>&&);

    cList<T> operator[] (const int index);

    ~Matrix();

    cList<T> getRow(int index);
    cList<T>& getRowS(int index);
    cList<T>& getColumn(int index);

    void nulling();

    const cList<T> getRow(int index) const;
    const cList<T>& getColumn(int index) const;

private:
    cList< cList<T> > M;
};



template <typename T>
cList<T> operator*(cVector vec, Matrix<T> other)
{
    cList<T> res;
    double t = 0;
    for (int i = 0; i < other.columncount(); ++i)
    {
        res.add_item(t);
        cIterator<T> ires(res);
        for (int j = 0; j < other.rowcount(); ++j)
        {
            cList<T> clt(other[j]);
            cIterator<double> irow(clt);
            ires[i].set_new_const(ires[i].get_value() + irow[i].get_value() * vec[j]);
        }
    }
    return res;
}

#include "MatrixFuncs.h"

#endif // MATRIX_H
