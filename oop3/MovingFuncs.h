#ifndef MOVINGFUNCS_H
#define MOVINGFUNCS_H

MovingX :: MovingX()
{
}

MovingX :: ~MovingX()
{
}

MovingX :: MovingX(double Delta)
{
    this->Delta = Delta;
}

void MovingX :: run(cPoint* Point)
{
    this->X_Moving(Point);
}


MovingY :: MovingY()
{
}

MovingY :: ~MovingY()
{
}

MovingY :: MovingY(double Delta)
{
    this->Delta = Delta;
}

void MovingY :: run(cPoint* Point)
{
    this->Y_Moving(Point);
}


MovingZ :: MovingZ()
{
}

MovingZ :: ~MovingZ()
{
}

MovingZ :: MovingZ(double Delta)
{
    this->Delta = Delta;
}

void MovingZ :: run(cPoint* Point)
{
    this->Z_Moving(Point);
}

#endif // MOVINGFUNCS_H
