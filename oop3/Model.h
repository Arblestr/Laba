#ifndef MODEL_H
#define MODEL_H

#include "BaseModel.h"

class cModel: public BaseModel
{
public:
    cModel();
    cModel(const cModel& Model);
    cModel& operator=(const cModel& Model);
    ~cModel();

    cList<cPoint>& get_points();
    cList<cLine>& get_lines();

    virtual void add_point(cPoint& Point);
    virtual void add_line(cLine& Line);

    virtual int get_points_count() const;
    virtual int get_lines_count() const;

    virtual void change(BaseChange* ChangeType);

private:
    cList<cPoint> Points;
    cList<cLine> Lines;
};

#endif // MODEL_H
