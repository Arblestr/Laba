#ifndef ACTIONLOAD_H
#define ACTIONLOAD_H
#include "BaseAction.h"

class ActionLoad: public BaseAction
{
public:
    ActionLoad();
    ~ActionLoad();
    ActionLoad(const char* FileName);

    virtual void make(BaseElement* Object);

private:
    const char* FileName;
};

#include "ActionLoadFuncs.h"
#endif // ACTIONLOAD_H
