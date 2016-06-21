
#include "CameraRotation.h"

CameraPitch :: CameraPitch()
{
}

CameraPitch :: CameraPitch(double Angle)
{
    this->Angle = Angle;
}

CameraPitch :: ~CameraPitch()
{
}

void CameraPitch :: run(BaseCamera* Camera)
{
    Camera->pitch(this->Angle);
}


CameraYaw :: CameraYaw()
{
}

CameraYaw :: CameraYaw(double Angle)
{
    this->Angle = Angle;
}

CameraYaw :: ~CameraYaw()
{
}

void CameraYaw :: run(BaseCamera* Camera)
{
    Camera->yaw(this->Angle);
}



CameraRoll :: CameraRoll()
{
}

CameraRoll :: CameraRoll(double Angle)
{
    this->Angle = Angle;
}

CameraRoll :: ~CameraRoll()
{
}

void CameraRoll :: run(BaseCamera* Camera)
{
    Camera->roll(this->Angle);
}
