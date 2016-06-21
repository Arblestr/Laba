#ifndef MATRIXFUNCS_H
#define MATRIXFUNCS_H
#include <cstddef>
#include "Iterator.h"
#include "IteratorConst.h"

template<typename T>
void Matrix<T> :: setRowCount(int count)
{
    this->_rowcount = count;
}

template<typename T>
void Matrix<T> :: setColCount(int count)
{
    this->_columncount = count;
}

template<typename T>
void Matrix<T> :: nulling()
{
   /*cList<double> null;
   for(int i = 0; i < 4; i++)
       null.add_item(0);
   for(int j = 0; j < 4; j++)
   this->M.add_item(null);*/
}

template<typename T>
Matrix<T> :: Matrix()
{
    this->M.clear();
    double null = 0;
    for (int i = 0; i < 4; i++)
    {
        cList<T> temp;
        for (int j = 0; j < 4; j++)
        {
            temp.add_item(null);
        }
        this->M.add_item(temp);
    }
    this->_columncount = 4;
    this->_rowcount = 4;
}

template<typename T>
Matrix<T> :: Matrix(Matrix<T>& other)
{
    this->M.clear();
    for (int i = 0; i < other.rowcount(); i++)
    {
        this->M.add_item(other.getRow(i));
    }
    this->_columncount = other.columncount();
    this->_rowcount = other.rowcount();
}


/*template<typename T>
Matrix<T>::Matrix(Matrix<T>&& other)
{
    this->M.clear();
    for (unsigned int i = 0; i < other.rowcount(); i++)
    {
        this->M.add_item(other.getRow(i));
    }
    this->_columncount = other.columncount();
    this->_rowcount = other.rowcount();
}*/

template<typename T>
Matrix<T> :: Matrix(int rowcount, int columncount)
{
    this->M.clear();
    double null = 0;
    for (int i = 0; i < rowcount; i++)
    {
        cList<T> temp;
        for (int j = 0; j < columncount; j++)
        {
            temp.add_item(null);
        }
        this->M.add_item(temp);
    }
    this->_columncount = columncount;
    this->_rowcount = rowcount;
}

template<typename T>
void Matrix<T> :: addColumn(cList<T> & arr)
{
    cIterator<T> iarr(arr);
    cIterator< cList<T> > iM(this->M);
    for (unsigned int i = 0; i < this->rowcount(); i++)
    {
        iM[i].add_item(iarr[i]);
    }
    this->_columncount++;
}

template<typename T>
void Matrix<T> :: addRow(cList<T> & arr)
{
    this->M.add_item(arr);
    this->_rowcount++;
}


template<typename T>
void Matrix<T>::setColumn(int index, cList<T> arr)
{
    cIterator<T> iarr(arr);
    cIterator< cList<T> > iM(this->M);
    for (int i = 0; i < this->rowcount(); i++)
    {
        cIterator<T> irow(iM[i].get_value());
        irow[index].set_new(iarr[i].get_value());
    }
}

template<typename T>
void Matrix<T>::setRow(int index, cList<T> arr)
{
    cIterator< cList<T> > iM(this->M);
    iM[index].set_new(arr);
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& other)
{
    this->M.clear();
    for (unsigned int i = 0; i < other.rowcount(); i++)
    {
        this->M.add_item(other.getRow(i));
    }
    this->_columncount = other.columncount();
    this->_rowcount = other.rowcount();
    return *this;
}

template <typename T>
cList<T>  Matrix<T> :: operator[](const int index)
{
    return this->getRow(index);
}

template<typename T>
Matrix<T>::~Matrix()
{
    this->M.clear();
}

template <typename T>
cList<T> Matrix<T>::getRow(int index)
{
    cIterator< cList<T> > iM(this->M);
    cList<T> row = iM[index].get_value();
    return row;
}

template <typename T>
cList<T>& Matrix<T>::getRowS(int index)
{
    cIterator< cList<T> > iM(this->M);
    cList<T> row = iM[index].get_value();
    return row;
}

template <typename T>
cList<T>& Matrix<T>::getColumn(int index)
{
    cIterator< cList<T> > iM(this->M);
    cList<T> column;
    while (iM.check())
    {
        cIterator< cList<T> > irow(iM.get_value());
        column.add_item();
    }
    return column;
}

template <typename T>
const cList<T> Matrix<T> :: getRow(int index) const
{
    cIterator< cList<T> > iM(this->M);
    cList<T> row = iM[index].get_value();
    return row;
}

template <typename T>
const cList<T>& Matrix<T> :: getColumn(int index) const
{
    cIterator< cList<T> > iM(this->M);
    cList<T> column;
    while (!iM.IsNullIter())
    {
        cIterator< cList<T> > irow(iM.get_value());
        column.add_item();
    }
    return column;
}

#endif // MATRIXFUNCS_H
