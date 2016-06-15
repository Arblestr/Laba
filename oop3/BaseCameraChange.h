#ifndef BASECAMERACHANGE_H
#define BASECAMERACHANGE_H
#include "BaseElementChange.h"

class cCamera;

class BaseCameraChange: public BaseElementChange
{
public:
    BaseCameraChange() {}
    ~BaseCameraChange() {}

    virtual void run(cCamera* Camera)= 0;
};

#endif // BASECAMERACHANGE_H
