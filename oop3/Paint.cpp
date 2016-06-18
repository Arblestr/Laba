#include "Paint.h"
#include "List.h"
#include "Iterator.h"
#include "PaintError.h"

Paint :: Paint(FoundationPaint* FoundationPaintObject)
{
    this->FoundationPaintObject = FoundationPaintObject;
}

Paint :: ~Paint()
{
}

void Paint :: paint_model(cModel* Model, cCamera* Camera)
{
    cList<cLine> Lines = Model->get_lines();

    if (!Lines.get_count())
    {
        throw PaintValuesError();
    }

    cIterator<cLine> IterForLines(Lines);

    while (!IterForLines.IsNullIter()) //
    {
        cLine Line = IterForLines.get_value();
        IterForLines.go_to_next();

        this->FoundationPaintObject->paint_line(Line.get_begin(),Line.get_end());
    }

}
