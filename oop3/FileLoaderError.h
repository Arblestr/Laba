#ifndef FILELOADERERROR_H
#define FILELOADERERROR_H
#include "BaseError.h"

class FileLoaderOpenError: public BaseError
{
public:
    virtual char* what()
    {
        return "\nCan not open the file\n";
    }
};

class FileLoaderReadError: public BaseError
{
public:
    virtual char* what()
    {
        return "\nWrong parameters in the file\n";
    }
};

class FileLoaderMemoryError: public BaseError
{
public:
    virtual char* what()
    {
        return "\nCan not allcoate memory for FileLoader object\n";
    }
};

#endif // FILELOADERERROR_H
