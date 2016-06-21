#include "BaseCreatorError.h"
#include "ActionRotate.h"

ActionRotateX :: ActionRotateX()
{
}

ActionRotateX :: ActionRotateX(double Angle, cPoint Center)
{
    this->Angle = Angle;
    this->Center = &Center;
}

ActionRotateX :: ~ActionRotateX()
{
}

void ActionRotateX :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorRotationX(this->Angle,this->Center);

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

    Object->change(ChangeType->get_change());
}


ActionRotateY :: ActionRotateY()
{
}

ActionRotateY :: ActionRotateY(double Angle, cPoint Center)
{
    this->Angle = Angle;
    this->Center = &Center;
}

ActionRotateY :: ~ActionRotateY()
{
}

void ActionRotateY :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorRotationY(this->Angle,this->Center);

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

    Object->change(ChangeType->get_change());
}


ActionRotateZ :: ActionRotateZ()
{
}

ActionRotateZ :: ActionRotateZ(double Angle, cPoint Center)
{
    this->Angle = Angle;
    this->Center = &Center;
}

ActionRotateZ :: ~ActionRotateZ()
{
}

void ActionRotateZ :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorRotationZ(this->Angle,this->Center);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    if (Index >= 0 )
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

    Object->change(ChangeType->get_change());
}
