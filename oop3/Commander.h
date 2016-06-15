#ifndef COMMANDER_H
#define COMMANDER_H

#include "BaseAction.h"

class Commander
{
public:
    Commander();
    ~Commander();

    void make(BaseAction& Action);

private:
    cComposite* Object;
};

#endif // COMMANDER_H
