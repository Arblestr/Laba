#ifndef ACTIONCAMERAROTATEFUNCS_H
#define ACTIONCAMERAROTATEFUNCS_H
#include "BaseCreatorError.h"


ActionCameraPitch :: ActionCameraPitch()
{
}

ActionCameraPitch :: ActionCameraPitch(double Angle)
{
    this->Angle = Angle;
}

ActionCameraPitch :: ~ActionCameraPitch()
{
}

void ActionCameraPitch :: make(BaseElement *Camera)
{
    BaseCreator* ChangeType = new CreatorCameraPitch(this->Angle);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Camera->change(ChangeType->get_change());
}



ActionCameraYaw :: ActionCameraYaw()
{
}

ActionCameraYaw :: ActionCameraYaw(double Angle)
{
    this->Angle = Angle;
}

ActionCameraYaw :: ~ActionCameraYaw()
{
}

void ActionCameraYaw :: make(BaseElement *Camera)
{
    BaseCreator* ChangeType = new CreatorCameraYaw(this->Angle);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Camera->change(ChangeType->get_change());
}




ActionCameraRoll :: ActionCameraRoll()
{
}

ActionCameraRoll :: ActionCameraRoll(double Angle)
{
    this->Angle = Angle;
}

ActionCameraRoll :: ~ActionCameraRoll()
{
}

void ActionCameraRoll :: make(BaseElement *Camera)
{
    BaseCreator* ChangeType = new CreatorCameraRoll(this->Angle);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    Camera->change(ChangeType->get_change());
}

#endif // ACTIONCAMERAROTATEFUNCS_H
