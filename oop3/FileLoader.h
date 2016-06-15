#ifndef FILELOADER_H
#define FILELOADER_H
#include <stdio.h>
#include "BaseLoader.h"

class FileLoader : public BaseLoader
{
public:
    FileLoader(const char* FileName);

    void open_file();
    void close_file();

    bool get_num(int& Num);

    virtual cPoint get_point();
    virtual cLine get_line(cModel* Model) const;

    void get_points(cModel*);
    void get_lines(cModel*);

    virtual cModel* get_model();

    virtual BaseClass* load_model(cComposite *Object);

private:
    const char* FileName;
    FILE* F;
    int PointsNum;
    int LinesNum;
};

#include "FileLoaderFuncs.h"

#endif // FILELOADER_H
