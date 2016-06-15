#ifndef BASEROTATIONFUNCS_H
#define BASEROTATIONFUNCS_H

void Rotation :: X_Rotation(cPoint* Point)
{
    this->Angle = this->Angle * M_PI / 180.0;
    double NewY =
        (Point->get_Y() - Center->get_Y()) * cos(this->Angle) -
        (Point->get_Z() - Center->get_Z()) * sin(this->Angle);
    double NewZ =
        (Point->get_Y() - Center->get_Y()) * sin(this->Angle) +
        (Point->get_Z() - Center->get_Z()) * cos(this->Angle);
    Point->set_Y(NewY);
    Point->set_Z(NewZ);
}

void Rotation :: Y_Rotation(cPoint* Point)
{
    this->Angle = this->Angle * M_PI / 180.0;
    double NewX =
        (Point->get_X() - Center->get_X()) * cos(this->Angle) -
        (Point->get_Z() - Center->get_Z()) * sin(this->Angle);
    double NewZ =
        (Point->get_X() - Center->get_X()) * sin(this->Angle) +
        (Point->get_Z() - Center->get_Z()) * cos(this->Angle);
    Point->set_X(NewX);
    Point->set_Z(NewZ);
}

void Rotation :: Z_Rotation(cPoint* Point)
{
    this->Angle = this->Angle * M_PI / 180.0;
    double NewX =
        (Point->get_X() - Center->get_X()) * cos(this->Angle) -
        (Point->get_Y() - Center->get_Y()) * sin(this->Angle);
    double NewY =
        (Point->get_X() - Center->get_X()) * sin(this->Angle) +
        (Point->get_Y() - Center->get_Y()) * cos(this->Angle);
    Point->set_X(NewX);
    Point->set_Y(NewY);
}

#endif // BASEROTATIONFUNCS_H
