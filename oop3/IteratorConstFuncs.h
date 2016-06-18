#ifndef ITERATORCONSTFUNCS_H
#define ITERATORCONSTFUNCS_H

#include "IteratorError.h"
#include "ListError.h"
#include <cstddef>

template <typename T>//
cConstIterator<T> :: cConstIterator(const cList<T> & List)
{
    this->List = &List;
    this->Item = this->List->Head;
}

template <typename T>//
cConstIterator<T> :: ~cConstIterator()
{
    this->Item = NULL;
    this->List = NULL;
}

template<typename T>//
bool cConstIterator<T> :: operator !=(const cConstIterator<T> & Compare_Iter)
{
    if (this->List != Compare_Iter.List)
            throw IteratorWrongListError();
    return this->Item != Compare_Iter.Item;
}

template<typename T>//
bool cConstIterator<T>::operator ==(const cConstIterator<T> & Compare_Iter)
{
    if (this->List != Compare_Iter.List)
            throw IteratorWrongListError();
    return this->Item == Compare_Iter.Item;
}

template<typename T>//
bool cConstIterator<T>::CompareIter(const cConstIterator<T> & Compare_Iter)
{
    if (this->List != Compare_Iter.List)
            throw IteratorWrongListError();
    return this->Item == Compare_Iter.Item;
}

template<typename T>//
void cConstIterator<T>::go_to_first()
{
    this->Item = this->List->Head;
}

template<typename T>//
void cConstIterator<T>::go_to_last()
{
    this->Item = this->List->Tail;
}

template<typename T>//
void cConstIterator<T>::go_to_next()
{
    this->Item = this->Item->Next;
}

template<typename T>//
void cConstIterator<T>::go_to_prev()
{
    item<T>* Temp = this->List->Head;
    if (Temp == this->Item)
    {
        this->Item = NULL;
        return;
    }
    while (Temp->Next != this->Item)
    {
        Temp = Temp->Next;
    }
    this->Item = Temp;
}

template <typename T>//
cConstIterator<T> & cConstIterator<T>::operator =(const cConstIterator<T>& Getting_Iter)
{
    this->Item = Getting_Iter.Item;
    this->List = Getting_Iter.List;
    return *this;
}

template <typename T>//
T& cConstIterator<T>::operator*()
{
    if (!this->Item)
    {
        throw IteratorEmptyItemError();
    }
    return this->Item->Info;
}

template <typename T>//
T& cConstIterator<T>::get_value()
{
    if (!this)
    {
        throw IteratorEmptyItemError();
    }
    return this->Item->Info;
}

template <typename T>//
bool cConstIterator<T>::operator !()
{
    return (this->List == NULL);
}

template <typename T>//
bool cConstIterator<T>::IsNullList()
{
    return (this->List == NULL);
}

template <typename T>//
bool cConstIterator<T>::IsNullIter()
{
    return (this->Item == NULL);
}

template <typename T>//
int cConstIterator<T>::get_count() const
{
    return (this->List.get_count());
}


#endif // ITERATORCONSTFUNCS_H
