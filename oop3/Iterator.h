#ifndef ITERATOR_H
#define ITERATOR_H

template <typename T>
struct item;

template <class T>
class cList;

template <typename T>
class cIterator
{
public:
    cIterator(cList<T> &);
    ~cIterator();

    bool CompareIter(const cIterator<T> & CompareIter);
    bool operator !=(const cIterator<T> & CompareIter);
    bool operator ==(const cIterator<T> & CompareIter);

    bool IsNullList();
    bool operator !();

    bool IsNullIter();

    cIterator<T> & operator=(const cIterator<T> & GettingIter);

    void go_to_next();

    void go_to_prev();

    T& operator*();
    T& get_value();

    T& iter_delete();
    void iter_add(T&);

    void go_to_first();
    void go_to_last();

    int get_count() const;

    void clear();
    void set_new(T& Info);

private:
    item<T>* Item;
    cList<T>* List;
};

#include "IteratorFuncs.h"

#endif // ITERATOR_H
