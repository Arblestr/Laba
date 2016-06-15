#ifndef BASELIST_H
#define BASELIST_H

class BaseList
{
public:
    virtual int get_count() const = 0;
protected:
    int Length;
};

#endif // BASELIST_H
