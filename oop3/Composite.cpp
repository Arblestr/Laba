#include "Composite.h"
#include "CompositeError.h"
#include "Iterator.h"
#include "IteratorError.h"

cComposite::cComposite()
{
}

cComposite::~cComposite()
{
    this->clear();
}

void cComposite::add(BaseClass* BaseClassObject)
{
    if (!BaseClassObject)
    {
        throw CompositeAddError();
    }
    this->Objects.add_item(BaseClassObject);
}

void cComposite::change(BaseChange* ChangeType)
{
    cIterator<BaseClass*> IterForChange(this->Objects);
    if (IterForChange.IsNullIter())
    {
        throw IteratorEmptyItemError();
    }
    for (int i = 0; i < this->Objects.get_count(); i++)
    {
        IterForChange.get_value()->change(ChangeType);
        IterForChange.go_to_next();
    }
}

void cComposite::clear()
{
    this->Objects.clear();
}
