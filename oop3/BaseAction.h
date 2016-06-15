#ifndef BASEACTION_H
#define BASEACTION_H
#include "Composite.h"
#include "Rotation.h"
#include "Scaling.h"
#include "Moving.h"
#include "CameraRotation.h"
#include "CreatorScaling.h"
#include "CreatorMoving.h"
#include "CreatorRotation.h"
#include "CreatorCameraRotation.h"

class BaseAction
{
public:
    BaseAction(){}
    ~BaseAction(){}

    virtual void make(BaseElement* Object) = 0;
};

#endif // BASEACTION_H
