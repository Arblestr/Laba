#ifndef COMPOSITEERROR_H
#define COMPOSITEERROR_H
#include "BaseError.h"

class CompositeAddError : public BaseError
{
public:
    virtual const char* what()
    {
        return "Can not add empty object to composite list!";
    }
};

class CompositeMemoryError : public BaseError
{
public:
    virtual const char* what()
    {
        return "Can not allocate memory for composite object!";
    }
};

#endif // COMPOSITEERROR_H
