#ifndef ACTIONLOADFUNCS_H
#define ACTIONLOADFUNCS_H
#include "FileLoader.h"
#include "FileLoaderError.h"l"

ActionLoad :: ActionLoad()
{
}

ActionLoad :: ActionLoad(const char* FileName)
{
    this->FileName = FileName;
}

ActionLoad :: ~ActionLoad()
{
}

void ActionLoad :: make(BaseElement* Object)
{
    FileLoader* FL = new FileLoader(this->FileName);

    if (!FL)
    {
        throw FileLoaderMemoryError();
    }

    FL->load_model(Object);

}

#endif // ACTIONLOADFUNCS_H
