#include "FileLoader.h"
#include "FileLoaderError.h"
#include "ActionLoad.h"
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

void ActionLoad :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    FileLoader* FL = new FileLoader(this->FileName);

    if (!FL)
    {
        throw FileLoaderMemoryError();
    }

    FL->load_model(Object);

}

