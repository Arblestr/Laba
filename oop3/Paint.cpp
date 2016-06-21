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
        if (Lines.get_count() == 0)
        {
            throw PaintValuesError();
        }

        cIterator<cLine> Linesiterator(Lines);

        while (!Linesiterator.IsNullIter())
        {
            cLine e = Linesiterator.get_value();

            Matrix<double> view(Camera->getView());
            cVector start(e.get_begin()->point_to_vector());
            cVector end(e.get_end()->point_to_vector());

            start = start * Camera->getTemp();
            end = end * Camera->getTemp();

            this->FoundationPaintObject->paint_line(cPoint(start),cPoint(end));

            Linesiterator.go_to_next();
        }

}
