#ifndef BASECAMERACHANGE_H
#define BASECAMERACHANGE_H
#include "BaseElementChange.h"


class BaseCamera;

class BaseCameraChange: public BaseElementChange
{
public:
    BaseCameraChange() {}
    ~BaseCameraChange() {}

    virtual void run(BaseCamera* Camera)= 0;
};

#endif // BASECAMERACHANGE_H
