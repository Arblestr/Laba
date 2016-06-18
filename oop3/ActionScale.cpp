#include "BaseCreatorError.h"
#include "ActionScale.h"
ActionScaleX :: ActionScaleX()
{
}

ActionScaleX :: ActionScaleX(double Alpha)
{
    this->Alpha = Alpha;

}

ActionScaleX :: ~ActionScaleX()
{
}

void ActionScaleX :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorScalingX(this->Alpha);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    if (Index > 0)
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


ActionScaleY :: ActionScaleY()
{
}

ActionScaleY :: ActionScaleY(double Alpha)
{
    this->Alpha = Alpha;

}

ActionScaleY :: ~ActionScaleY()
{
}

void ActionScaleY :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorScalingY(this->Alpha);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    if (Index > 0)
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


ActionScaleZ :: ActionScaleZ()
{
}

ActionScaleZ :: ActionScaleZ(double Alpha)
{
    this->Alpha = Alpha;

}

ActionScaleZ :: ~ActionScaleZ()
{
}

void ActionScaleZ :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorScalingZ(this->Alpha);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    if (Index > 0)
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

ActionScaleXYZ :: ActionScaleXYZ()
{
}

ActionScaleXYZ :: ActionScaleXYZ(double Alpha)
{
    this->Alpha = Alpha;

}

ActionScaleXYZ :: ~ActionScaleXYZ()
{
}

void ActionScaleXYZ :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorScalingXYZ(this->Alpha);

    if (!ChangeType)
    {
        throw CreatorMemoryError();
    }

    if (Index > 0 )
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
