#ifndef ACTIONPAINT_H
#define ACTIONPAINT_H
#include "BaseAction.h"

class ActionPaint: public BaseAction
{
public:
    ActionPaint();
    ~ActionPaint();
    ActionPaint(FoundationPaint* FP)
    {
        this->FP = FP;
    }

    virtual void make(BaseElement* Object, BaseElement* Camera, int Index)
    {
        this->FP->clear();
        Paint* P = new Paint(this->FP);

        cCamera* Cam = new cCamera;
        if (Index > 0)
        {
            cComposite* CompObject = (cComposite*)Camera;
            cIterator<BaseElement*> IndexObject(CompObject->Objects);
            int i = 0;
            while (!IndexObject.IsNullIter() && i < Index)
            {
                i++;
                IndexObject.go_to_next();
            }
            Cam = (cCamera*)IndexObject.get_value();
        }

        cModel* Model = new cModel;
        cComposite* CompObject = (cComposite*)Object;
        cIterator<BaseElement*> IndexObject(CompObject->Objects);

        while (!IndexObject.IsNullIter())
        {
            Model = (cModel*)IndexObject.get_value();
            P->paint_model(Model,Cam);
            IndexObject.go_to_next();
        }
    }

private:
    FoundationPaint* FP;
};
#endif // ACTIONPAINT_H
