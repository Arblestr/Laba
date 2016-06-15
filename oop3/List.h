#ifndef LIST_H
#define LIST_H
#include "BaseList.h"


template <typename T>
struct item
{
    item<T>* Next;
    T Info;
};

#include "Iterator.h"

template <typename T>
class cList : public BaseList
{
public:
    cList();
    ~cList();

    void add_item(T&);
    T& del_item();

    void clear();

    virtual int get_count() const;

    friend class cIterator<T>;

private:
    item<T> *Head;
    item<T> *Tail;
};

#include "ListFuncs.h"

#endif // LIST_H
