#ifndef BASEMODEL_H
#define BASEMODEL_H
#include "BaseClass.h"
#include "Point.h"
#include "Line.h"
#include "List.h"

class BaseModel: public BaseClass
{
public:
    virtual void add_point(cPoint&) = 0;
    virtual void add_line(cLine&) = 0;

    virtual int get_points_count() const = 0;
    virtual int get_lines_count() const = 0;

    virtual void change(BaseChange* ChangeType) = 0;
};

#endif // BASEMODEL_H
