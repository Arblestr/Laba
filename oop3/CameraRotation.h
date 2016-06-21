#ifndef CAMERAROTATION_H
#define CAMERAROTATION_H
#include "BaseCameraChange.h"
#include "BaseCamera.h"
#include "MatrixWork.h"
#include "Matrix.h"

class CameraPitch : public BaseCameraChange
{
public:
    CameraPitch();
    CameraPitch(double Angle);
    ~CameraPitch();

    virtual void run(BaseCamera* Camera);

private:
    double Angle;
};

class CameraYaw : public BaseCameraChange
{
public:
    CameraYaw();
    CameraYaw(double Angle);
    ~CameraYaw();

    virtual void run(BaseCamera* Camera);

private:
    double Angle;
};

class CameraRoll : public BaseCameraChange
{
public:
    CameraRoll();
    CameraRoll(double Angle);
    ~CameraRoll();

    virtual void run(BaseCamera* Camera);

private:
    double Angle;
};

#endif // CAMERAROTATION_H
