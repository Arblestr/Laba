#ifndef LISTFUNCS_H
#define LISTFUNCS_H

#include "ListError.h"
#include <cstddef>

template  <typename T>
cList<T> :: cList()
{
    this->Head = NULL;
    this->Tail = NULL;
    this->Length = 0;
}

template <typename T>
void cList<T> :: clear()
{
    while (this->Head)
    {
        this->Tail = this->Head->Next;
        delete this->Head;
        this->Head = this->Tail;
    }

    this->Length = 0;
}

template  <typename T>
cList<T> :: ~cList()
{
    this->clear();
}

template <typename T>
void cList<T> :: add_item(T& Info)
{
    item<T>* NewItem;
    NewItem = new item<T>;

    if (!NewItem)
    {
        throw ListMemoryError();
    }

    NewItem->Next = NULL;
    NewItem->Info = Info;

    if (!this->Head)
    {
        this->Head = NewItem;
        this->Tail = NewItem;
    }
    else
    {
        this->Tail->Next = NewItem;
        this->Tail = NewItem;
    }

    this->Length++;
}

template <typename T>
T& cList<T> :: del_item()
{
    if (!this->Head)
    {
        throw ListDeleteError();
    }

    T& Info = this->Tail->Info;

    delete this->Tail;

    this->Length--;

    this->Tail = this->Head;

    while (this->Tail && this->Tail->Next)
    {
        this->Tail = this->Tail->Next;
    }

    return Info;
}

template <typename T>
int cList<T> :: get_count() const
{
    return this->Length;
}

#endif // LISTFUNCS_H
