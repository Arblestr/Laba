#include "Model.h"

cModel :: cModel()
{
}

cModel :: cModel(const cModel& Model)
{
    this->Points = Model.Points;
    this->Lines = Model.Lines;
}

cModel& cModel::operator=(const cModel& Model)
{
    this->Points = Model.Points;
    this->Lines = Model.Lines;

    return *this;
}

cModel::~cModel()
{
    if (this->get_points_count() != 0)
    {
        this->Points.clear();
    }
    if (this->get_lines_count() != 0)
    {
        this->Lines.clear();
    }
}

cList<cPoint>& cModel::get_points()
{
    return this->Points;
}

cList<cLine>& cModel::get_lines()
{
    return this->Lines;
}

void cModel :: add_point(cPoint& Point)
{
    this->Points.add_item(Point);
}

void cModel :: add_line(cLine& Line)
{
    this->Lines.add_item(Line);
}

int cModel :: get_points_count() const
{
    return this->Points.get_count();
}

int cModel :: get_lines_count() const
{
    return this->Lines.get_count();
}

void cModel :: change(BaseChange* ChangeType)
{
    cIterator<cPoint> IterForLine(this->get_points());
    while (!IterForLine.IsNullIter())
    {
        IterForLine.get_value().change(ChangeType);
        IterForLine.go_to_next();
    }
}
