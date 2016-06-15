#ifndef BASESCALINGFUNCS_H
#define BASESCALINGFUNCS_H

void Scaling :: X_Scaling(cPoint* Point)
{
    double NewX = Point->get_X() * Alpha;

    Point->set_X(NewX);
}

void Scaling :: Y_Scaling(cPoint* Point)
{
    double NewY = Point->get_Y() * Alpha;

    Point->set_Y(NewY);
}


void Scaling :: Z_Scaling(cPoint* Point)
{
    double NewZ = Point->get_Z() * Alpha;

    Point->set_Z(NewZ);
}

void Scaling :: XYZ_Scaling(cPoint* Point)
{
    double NewX = Point->get_X() * Alpha;
    double NewY = Point->get_Y() * Alpha;
    double NewZ = Point->get_Z() * Alpha;

    Point->set_X(NewX);
    Point->set_Y(NewY);
    Point->set_Z(NewZ);
}

#endif // BASESCALINGFUNCS_H
