#ifndef ITERATORCONST_H
#define ITERATORCONST_H

template <typename T>
struct item;

template <class T>
class cList;

template <typename T>
class cConstIterator
{
public:
    cConstIterator(const cList<T> &);
    ~cConstIterator();

    bool CompareIter(const cConstIterator<T> & CompareIter);
    bool operator !=(const cConstIterator<T> & CompareIter);
    bool operator ==(const cConstIterator<T> & CompareIter);

    bool IsNullList();
    bool operator !();

    bool IsNullIter();

    cConstIterator<T> & operator=(const cConstIterator<T> & GettingIter);

    void go_to_next();

    void go_to_prev();

    T& operator*();
    T& get_value();

    void go_to_first();
    void go_to_last();

    int get_count() const;

private:
    item<T>* Item;
    const cList<T>* List;
};

#include "IteratorConstFuncs.h"

#endif // ITERATORCONST_H
