#ifndef ITERATORERROR_H
#define ITERATORERROR_H
#include "BaseError.h"

class IteratorWrongListError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not compare iterators from different lists\n";
    }
};

class IteratorEmptyItemError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not work with NULL iterator\n";
    }
};

class IteratorOutpostError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not increment/decrement iterator to NULL zone\n";
    }
};

class IteratorDeleteError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not delete element in Null zone\n";
    }
};

#endif // ITERATORERROR_H
