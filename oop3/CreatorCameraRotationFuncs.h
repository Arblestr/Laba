#ifndef CREATORCAMERAROTATIONFUNCS_H
#define CREATORCAMERAROTATIONFUNCS_H
#include "BaseChangeError.h"

CreatorCameraPitch :: CreatorCameraPitch()
{
}

CreatorCameraPitch :: ~CreatorCameraPitch()
{
}

CreatorCameraPitch :: CreatorCameraPitch(double Angle)
{
    this->Angle = Angle;
}

BaseElementChange* CreatorCameraPitch :: get_change()
{
    BaseCameraChange* PitchChange = new CameraPitch(this->Angle);

    if (!PitchChange)
    {
        throw ChangeMemoryError();
    }

    return PitchChange;
}




CreatorCameraYaw :: CreatorCameraYaw()
{
}

CreatorCameraYaw :: ~CreatorCameraYaw()
{
}

CreatorCameraYaw :: CreatorCameraYaw(double Angle)
{
    this->Angle = Angle;
}

BaseElementChange* CreatorCameraYaw :: get_change()
{
    BaseCameraChange* YawChange = new CameraYaw(this->Angle);

    if (!YawChange)
    {
        throw ChangeMemoryError();
    }

    return YawChange;
}



CreatorCameraRoll :: CreatorCameraRoll()
{
}

CreatorCameraRoll :: ~CreatorCameraRoll()
{
}

CreatorCameraRoll :: CreatorCameraRoll(double Angle)
{
    this->Angle = Angle;
}

BaseElementChange* CreatorCameraRoll :: get_change()
{
    BaseCameraChange* RollChange = new CameraRoll(this->Angle);

    if (!RollChange)
    {
        throw ChangeMemoryError();
    }

    return RollChange;
}

#endif // CREATORCAMERAROTATIONFUNCS_H
