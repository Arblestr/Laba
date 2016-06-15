#ifndef FILELOADERFUNCS_H
#define FILELOADERFUNCS_H
#include "FileLoaderError.h"
#include "IteratorError.h"
#include "ModelError.h"
#include "Composite.h"

FileLoader :: FileLoader(const char* FileName)
{
    this->FileName = FileName;
    this->F = NULL;
    this->PointsNum = 0;
    this->LinesNum = 0;
}

void FileLoader :: open_file()
{
    if ((this->F = fopen(this->FileName, "r")) == NULL)
    {
        throw FileLoaderOpenError();
    }
}

void FileLoader :: close_file()
{
    fclose(this->F);
}

bool FileLoader :: get_num(int& Num)
{
    return (fscanf(this->F, "%d", &Num) == 1);
}

cPoint FileLoader :: get_point()
{
    double X, Y, Z;
    if (fscanf(this->F, "%lf %lf %lf", &X, &Y, &Z) != 3)
    {
        throw FileLoaderReadError();
    }
    cPoint Point;
    Point.set_X(X);
    Point.set_Y(Y);
    Point.set_Z(Z);
    return Point;
}

cLine FileLoader :: get_line(cModel* Model) const
{
    int A, B;
    if (fscanf(this->F, "%d %d", &A, &B) != 2)
    {
        throw FileLoaderReadError();
    }
    cLine Line;
    cIterator<cPoint> IterForPoints(Model->get_points());
    if (IterForPoints.IsNullIter())
    {
        throw IteratorEmptyItemError();
    }
    for (int i = 0; i < A; i++)
    {
        IterForPoints.go_to_next();
        if (IterForPoints.IsNullIter())
        {
            throw FileLoaderReadError();
        }
    }
    Line.set_begin(&IterForPoints.get_value());
    IterForPoints.go_to_first();
    for (int i = 0; i < B; i++)
    {
        IterForPoints.go_to_next();
        if (IterForPoints.IsNullIter())
        {
            throw FileLoaderReadError();
        }
    }
    Line.set_end(&IterForPoints.get_value());
    return Line;
}

void FileLoader :: get_points(cModel* Model)
{
    int Num;
    if (!this->get_num(Num))
    {
        throw FileLoaderReadError();
    }
    for (int i = 0; i < Num; i++)
    {
        cPoint Point = this->get_point();
        Model->add_point(Point);
    }
}

void FileLoader :: get_lines(cModel* Model)
{
    int Num;
    if (!this->get_num(Num))
    {
        throw FileLoaderReadError();
    }
    for (int i = 0; i < Num; i++)
    {
        cLine Line = this->get_line(Model);
        Model->add_line(Line);
    }
}

cModel* FileLoader :: get_model()
{
    cModel* Model = new cModel;
    if (!Model)
    {
        throw ModelMemoryError();
    }
    try
    {
        this->get_points(Model);
        this->get_lines(Model);
    }
    catch (BaseError& err)
    {
        delete Model;
        throw;
    }
    return Model;
}

BaseClass* FileLoader :: load_model(cComposite *Object)
{

    this->open_file();

    int Num;
    if (!this->get_num(Num))
    {
        this->close_file();
        throw FileLoaderReadError();
    }
    try
    {
        for (int i = 0; i < Num; i++)
        {
            cModel* Model = this->get_model();
            Object->add(Model);
        }
        this->close_file();
    }
    catch(BaseError& err)
    {
        this->close_file();
        throw;
    }

    return Object;
}

#endif // FILELOADERFUNCS_H
