#ifndef COMMANDER_H
#define COMMANDER_H

#include "BaseAction.h"

class Commander
{
public:
    Commander();
    ~Commander();

    void make(BaseAction& Action, int Index);

private:
    BaseElement* Object;
    BaseElement* Camera;
};

#endif // COMMANDER_H
