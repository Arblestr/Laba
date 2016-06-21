#include "BaseCreatorError.h"
#include "ActionCameraRotate.h"

ActionCameraPitch :: ActionCameraPitch()
{
}

ActionCameraPitch :: ActionCameraPitch(double Angle)
{
    this->Angle = Angle;
}

ActionCameraPitch :: ~ActionCameraPitch()
{
}

void ActionCameraPitch :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorCameraPitch(this->Angle);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    if (Index >= 0)
    {
       int i = 0;
       cIterator<BaseElement*> IndexObject(((cComposite*)Object)->Objects);
       while (!IndexObject.IsNullIter() && i < Index)
       {
           IndexObject.go_to_next();
           i++;
       }
       Object = IndexObject.get_value();
    }

    Camera->change(ChangeType->get_change());
}



ActionCameraYaw :: ActionCameraYaw()
{
}

ActionCameraYaw :: ActionCameraYaw(double Angle)
{
    this->Angle = Angle;
}

ActionCameraYaw :: ~ActionCameraYaw()
{
}

void ActionCameraYaw :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorCameraYaw(this->Angle);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    if (Index >= 0)
    {
       int i = 0;
       cIterator<BaseElement*> IndexObject(((cComposite*)Object)->Objects);
       while (!IndexObject.IsNullIter() && i < Index)
       {
           IndexObject.go_to_next();
           i++;
       }
       Object = IndexObject.get_value();
    }

    Camera->change(ChangeType->get_change());
}




ActionCameraRoll :: ActionCameraRoll()
{
}

ActionCameraRoll :: ActionCameraRoll(double Angle)
{
    this->Angle = Angle;
}

ActionCameraRoll :: ~ActionCameraRoll()
{
}

void ActionCameraRoll :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorCameraRoll(this->Angle);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    if (Index >= 0)
    {
       int i = 0;
       cIterator<BaseElement*> IndexObject(((cComposite*)Object)->Objects);
       while (!IndexObject.IsNullIter() && i < Index)
       {
           IndexObject.go_to_next();
           i++;
       }
       Object = IndexObject.get_value();
    }

    Camera->change(ChangeType->get_change());
}

