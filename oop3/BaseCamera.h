#ifndef BASECAMERA_H
#define BASECAMERA_H
#include "BaseClass.h"
#include "BaseCameraChange.h"
#include "BaseElement.h"

class BaseCamera: public BaseElement
{
public:
    virtual void change(BaseCameraChange* ChangeType) = 0;

    virtual void change(BaseElementChange* mod)
    {
        this->change((BaseCameraChange*)mod);
    }

    virtual void pitch(double) = 0;
    virtual void yaw(double) = 0;
    virtual void roll(double) = 0;

    virtual void rotateVerticalSphere(double) = 0;
    virtual void rotateHorizontalSphere(double) = 0;

    virtual void add(BaseCamera*) {}/////
};

#endif // BASECAMERA_H
