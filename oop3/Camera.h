#ifndef CAMERA_H
#define CAMERA_H
#include "BaseCamera.h"
#include "Vector.h"
#include "Point.h"

class cCamera : public BaseCamera
{
public:
    cCamera();
    cCamera(cPoint&, cPoint&, double, double, double);

    void set_right(cList<double>);
    void set_up(cList<double>);
    void set_direction(cList<double>);

    void set_position(cList<double>);
    void set_target(cList<double>);

    virtual void change(BaseCameraChange*);//?

private:
    cVector right;
    cVector up;
    cVector direction;

    cVector position;
    cVector target;
};

#endif // CAMERA_H
