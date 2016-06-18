#ifndef MODELERROR_H
#define MODELERROR_H
#include "BaseError.h"

class ModelMemoryError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not allocate memory for model\n";
    }
};

#endif // MODELERROR_H
