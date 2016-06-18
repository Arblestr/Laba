#ifndef ACTIONLOAD_H
#define ACTIONLOAD_H
#include "BaseAction.h"

class ActionLoad: public BaseAction
{
public:
    ActionLoad();
    ~ActionLoad();
    ActionLoad(const char* FileName);

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index);

private:
    const char* FileName;
};
#endif // ACTIONLOAD_H
