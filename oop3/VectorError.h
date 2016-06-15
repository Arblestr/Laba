#ifndef VECTORERROR_H
#define VECTORERROR_H
#include "BaseError.h"

class VectorLengthError: public BaseError
{
public:
    virtual char* what()
    {
        return "\nVector has wrong length\n";
    }
};

#endif // VECTORERROR_H
