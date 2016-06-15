#ifndef LISTERROR_H
#define LISTERROR_H
#include "BaseError.h"

class ListMemoryError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not allocate memory for a new list item\n";
    }
};

class ListDeleteError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not delete an item from empty list\n";
    }
};

#endif // LISTERROR_H
