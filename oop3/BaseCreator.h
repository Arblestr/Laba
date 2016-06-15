#ifndef BASECREATOR_H
#define BASECREATOR_H
#include "BaseChange.h"
#include "BaseCameraChange.h"

class BaseCreator
{
public:
    BaseCreator() {}
    ~BaseCreator() {}

    virtual BaseElementChange* get_change() = 0;
};

#endif // BASECREATOR_H
