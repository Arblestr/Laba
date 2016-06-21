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
#include "IteratorConst.h"

template <typename T>
class cList : public BaseList
{
public:
    cList();
    cList(const cList<T>& ConstList);
    //cList(cList<T>&& List);
    ~cList();

    cList<T>& operator=(const cList<T>& List);

    //void add_item(T&);
    void add_item(T);
    //void add_item(const T&);
    T& del_item();

    void clear();

    virtual int get_count() const;

    friend class cIterator<T>;
    friend class cConstIterator<T>;

private:
    item<T> *Head;
    item<T> *Tail;
};

#include "ListFuncs.h"

#endif // LIST_H
