#include "BaseCreatorError.h"
#include "ActionMove.h"

ActionMoveX :: ActionMoveX()
{
}

ActionMoveX :: ActionMoveX(double Delta)
{
    this->Delta = Delta;

}

ActionMoveX :: ~ActionMoveX()
{
}

void ActionMoveX :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorMovingX(this->Delta);

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


ActionMoveY :: ActionMoveY()
{
}

ActionMoveY :: ActionMoveY(double Delta)
{
    this->Delta = Delta;

}

ActionMoveY :: ~ActionMoveY()
{
}

void ActionMoveY :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorMovingY(this->Delta);

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


ActionMoveZ :: ActionMoveZ()
{
}

ActionMoveZ :: ActionMoveZ(double Delta)
{
    this->Delta = Delta;

}

ActionMoveZ :: ~ActionMoveZ()
{
}

void ActionMoveZ :: make(BaseElement* Object, BaseElement* Camera, int Index)
{
    BaseCreator* ChangeType = new CreatorMovingZ(this->Delta);

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
