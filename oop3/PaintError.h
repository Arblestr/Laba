#ifndef PAINTERROR_H
#define PAINTERROR_H
#include "BaseError.h"

class PaintValuesError: public BaseError
{
public:
    virtual const char* what()
    {
        return "\nCan not get lines/vertexes from model\n";
    }
};

#endif // PAINTERROR_H
