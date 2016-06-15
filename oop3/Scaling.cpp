#include "Scaling.h"

ScalingX :: ScalingX()
{
}

ScalingX :: ~ScalingX()
{
}

ScalingX :: ScalingX(double Alpha)
{
    this->Alpha = Alpha;
}

void ScalingX :: run(cPoint* Point)
{
    this->X_Scaling(Point);
}


ScalingY :: ScalingY()
{
}

ScalingY :: ~ScalingY()
{
}

ScalingY :: ScalingY(double Alpha)
{
    this->Alpha = Alpha;
}

void ScalingY :: run(cPoint* Point)
{
    this->Y_Scaling(Point);
}


ScalingZ :: ScalingZ()
{
}

ScalingZ :: ~ScalingZ()
{
}

ScalingZ :: ScalingZ(double Alpha)
{
    this->Alpha = Alpha;
}

void ScalingZ :: run(cPoint* Point)
{
    this->Z_Scaling(Point);
}


ScalingXYZ :: ScalingXYZ()
{
}

ScalingXYZ :: ~ScalingXYZ()
{
}

ScalingXYZ :: ScalingXYZ(double Alpha)
{
    this->Alpha = Alpha;
}

void ScalingXYZ :: run(cPoint* Point)
{
    this->XYZ_Scaling(Point);
}
