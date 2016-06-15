#ifndef BASECHANGEERROR_H
#define BASECHANGEERROR_H
#include "BaseError.h"

class ChangeMemoryError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not allocate memory for BaseChange object\n";
    }
};

#endif // BASECHANGEERROR_H
