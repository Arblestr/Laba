#ifndef BASECAMERA_H
#define BASECAMERA_H
#include "BaseClass.h"
#include "BaseCameraChange.h"
#include "BaseElement.h"

class BaseCamera: public BaseElement
{
public:
    virtual void change(BaseCameraChange* ChangeType) = 0;
};

#endif // BASECAMERA_H
