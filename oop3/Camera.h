#ifndef CAMERA_H
#define CAMERA_H
#include "BaseCamera.h"
#include "Vector.h"
#include "Matrix.h"
#include "Point.h"

class cCamera : public BaseCamera
{
public:
    cCamera();
    ~cCamera();
    cCamera(cPoint*, cPoint*, double, double, double);

    void set_right(cList<double>);
    void set_up(cList<double>);
    void set_direction(cList<double>);

    void set_position(cList<double>);
    void set_target(cList<double>);

    virtual void change(BaseCameraChange*);//?

    cVector get_right();
    cVector get_up();
    cVector get_direction();

    cVector get_position();
    cVector get_target();

    virtual void pitch(double);
    virtual void yaw(double);
    virtual void roll(double);

    virtual void rotateVerticalSphere(double);
    virtual void rotateHorizontalSphere(double);

    Matrix<double>& getView();
    Matrix<double> getViewT();

    Matrix<double>& getTemp();

private:
    cVector right;
    cVector up;
    cVector direction;

    cVector position;
    cVector target;

    Matrix<double> temp;
};

#endif // CAMERA_H
