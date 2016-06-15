#ifndef FOUNDATIONPAINTFUNCS_H
#define FOUNDATIONPAINTFUNCS_H

FoundationPaint :: FoundationPaint(QGraphicsScene* Scene)
{
    this->Scene = Scene;
    this->Pen.setColor(Qt :: black);
    this->Pen.setWidth(1);
}

FoundationPaint :: ~FoundationPaint()
{
}

void FoundationPaint :: paint_line(cPoint* A, cPoint* B)
{
    this->Scene->addLine(A->get_X(),A->get_Y,B->get_X(),B->get_Y(),this->Pen);
}

void FoundationPaint :: set_width(int W)
{
    this->Pen.setWidth(W);
}

void FoundationPaint :: set_color(int R, int G, int B)
{
    this->Pen.setColor(qRgb(R, G, B));
}

void FoundationPaint :: clear()
{
    this->Scene.clear();
}



#endif // FOUNDATIONPAINTFUNCS_H
