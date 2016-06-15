#ifndef BASECREATORERROR_H
#define BASECREATORERROR_H

#include "BaseError.h"

class CreatorMemoryError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not allocate memory for BaseCreator object\n";
    }
};

#endif // BASECREATORERROR_H
