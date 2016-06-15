#ifndef BASELOADER_H
#define BASELOADER_H
#include "Model.h"
#include "Composite.h"

class BaseLoader
{
public:
    virtual cPoint get_point() = 0;
    virtual cLine get_line(cModel*) const = 0;
    virtual cModel* get_model() = 0;
    virtual BaseClass* load_model(cComposite *Object) = 0;
};

#endif // BASELOADER_H
