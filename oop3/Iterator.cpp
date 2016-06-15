#include "IteratorError.h"
#include "ListError.h"
#include "Iterator.h"
#include <cstddef>

template<typename T>
void cIterator<T> :: set_new(T& Info)
{
    this->Item->Info = Info;
}

template <typename T>//
cIterator<T> :: cIterator(cList<T> & List)
{
    this->List = &List;
    this->Item = this->List->Head;
}

template <typename T>//
cIterator<T> :: ~cIterator()
{
    this->Item = NULL;
    this->List = NULL;
}

template<typename T>//
bool cIterator<T> :: operator !=(const cIterator<T> & Compare_Iter)
{
    if (this->List != Compare_Iter.List)
            throw IteratorWrongListError();
    return this->Item != Compare_Iter.Item;
}

template<typename T>//
bool cIterator<T>::operator ==(const cIterator<T> & Compare_Iter)
{
    if (this->List != Compare_Iter.List)
            throw IteratorWrongListError();
    return this->Item == Compare_Iter.Item;
}

template<typename T>//
bool cIterator<T>::CompareIter(const cIterator<T> & Compare_Iter)
{
    if (this->List != Compare_Iter.List)
            throw IteratorWrongListError();
    return this->Item == Compare_Iter.Item;
}

template<typename T>//
void cIterator<T>::go_to_first()
{
    this->Item = this->List->Head;
}

template<typename T>//
void cIterator<T>::go_to_last()
{
    this->Item = this->List->Tail;
}

template<typename T>//
void cIterator<T>::go_to_next()
{
    this->Item = this->Item->Next;
}

template<typename T>//
void cIterator<T>::go_to_prev()
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
cIterator<T> & cIterator<T>::operator =(const cIterator<T>& Getting_Iter)
{
    this->Item = Getting_Iter.Item;
    this->List = Getting_Iter.List;
    return *this;
}

/*template <typename T>//
cIterator<T> & cIterator<T>::operator ++()
{
    if (this->Item == this->List->Tail)
        {
            throw IteratorOutpostError();
        }
    this->go_to_next();
    return *this;
}

template <typename T>//
cIterator<T> cIterator<T>::operator ++(T)
{
    if (this->Item == this->List->Tail)
        {
            throw IteratorOutpostError();
        }
    cIterator<T> Help_Iter = *this;
    this->go_to_next();
    return Help_Iter;
}

template <typename T>//
cIterator<T> & cIterator<T>::operator --()
{
    if (this->Item == this->List->Head)
    {
        throw IteratorOutpostError();
    }
    this->go_to_prev();
    return *this;
}
*template <typename T>//
cIterator<T> cIterator<T>::operator --(T)
{
    if (this->Item == this->List->Head)
    {
        throw IteratorOutpostError();
    }
    cIterator<T> Help_Iter = *this;
    this->go_to_prev();
    return Help_Iter;
}*/

template <typename T>//
T& cIterator<T>::iter_delete()
{
    if (this->IsNullIter())
    {
        throw IteratorEmptyItemError();
    }

    T Info;

    if (this->List->Head != this->List->Tail)
    {
        item<T>* DelItem;
        if (this->Item == this->List->Head)
        {
            throw IteratorDeleteError();
        }
        else
        {
            item<T>* PrevItem = NULL;

            DelItem = this->List->Head;
            while (DelItem->Next != this->Item)
            {
                PrevItem = DelItem;
                DelItem = DelItem->Next;
            }

            if (PrevItem == NULL)
            {
                this->List->Head = Item;
            }
            else
            {
                PrevItem->Next = this->Item;
            }

            Info = DelItem->Info;
            delete DelItem;
        }
    }
    else
    {
        Info = this->List->del_item();
    }

    this->List->Length--;
    return Info;
}

template <typename T>//
void cIterator<T>::iter_add(T& Info)
{
    if (this->IsNullIter())
    {
        throw IteratorEmptyItemError();
    }

    item<T>* NewItem = new item<T>;

    if (!NewItem)
    {
        throw ListMemoryError();
    }

    NewItem->Info = Info;
    NewItem->Next = this->Item->Next;
    this->Item->Next = NewItem;

    if (NewItem->Next == NULL)
    {
        this->List->Tail = NewItem;
    }

    this->List->Length++;
}

template <typename T>//
T& cIterator<T>::operator*()
{
    if (!this->Item)
    {
        throw IteratorEmptyItemError();
    }
    return this->Item->Info;
}

template <typename T>//
T& cIterator<T>::get_value()
{
    if (!this)
    {
        throw IteratorEmptyItemError();
    }
    return this->Item->Info;
}

template <typename T>//
bool cIterator<T>::operator !()
{
    return (this->List == NULL);
}

template <typename T>//
bool cIterator<T>::IsNullList()
{
    return (this->List == NULL);
}

template <typename T>//
bool cIterator<T>::IsNullIter()
{
    return (this->Item == NULL);
}

template <typename T>//
int cIterator<T>::get_count() const
{
    return (this->List.get_count());
}

template <typename T>//
void cIterator<T>::clear()
{
    return (this->List.clear());
}
