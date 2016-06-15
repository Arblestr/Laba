#ifndef PAINTFUNCS_H
#define PAINTFUNCS_H
#include "List.h"
#include "Iterator.h"
#include "PaintError.h"

Paint :: Paint(FoundationPaint* FoundationPaint)
{
    this->FoundationPaint = FoundationPaint;
}

Paint :: ~Paint()
{
}

void Paint :: paint_model(cModel& Model, cCamera& Camera)
{
    cList<cLine> Lines = Model.get_lines();

    if (!Lines.Length)
    {
        throw PaintValuesError();
    }

    cIterator<cLine> IterForLines(Lines);

    while (!IterForLines.IsNullIter()) //
    {
        cLine Line = IterForLines.get_value();

        this->FoundationPaint->paint_line(Line.get_begin(),Line.get_begin());
    }

}

#endif // PAINTFUNCS_H
