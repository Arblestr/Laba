#ifndef BASEMOVINGFUNCS_H
#define BASEMOVINGFUNCS_H

void Moving :: X_Moving(cPoint* Point)
{
    double NewX = Point->get_X() + this->Delta;

    Point->set_X(NewX);
}

void Moving :: Y_Moving(cPoint* Point)
{
    double NewY = Point->get_Y() + this->Delta;

    Point->set_Y(NewY);
}

void Moving :: Z_Moving(cPoint* Point)
{
    double NewZ = Point->get_Z() + this->Delta;

    Point->set_Z(NewZ);
}

#endif // BASEMOVINGFUNCS_H
