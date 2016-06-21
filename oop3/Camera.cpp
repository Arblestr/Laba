#include "Camera.h"
#include "Matrix.h"
#include "MatrixWork.h"

Matrix<double>& cCamera::getTemp()
{
    return this->temp;
}

Matrix<double>& cCamera::getView()
{
    this->direction.normalize();

    this->up = cVector::cross(this->direction, this->right);
    this->up.normalize();

    this->right = cVector::cross(this->up, this->direction);
    this->right.normalize();

    double x = -cVector::scalar_mult(this->right, this->position);
    double y = -cVector::scalar_mult(this->up, this->position);
    double z = -cVector::scalar_mult(this->direction, this->position);

    Matrix<double> tmp(4, 4);
    tmp.setColumn(0, this->right.getArray());
    tmp.setColumn(1, this->up.getArray());
    tmp.setColumn(2, this->direction.getArray());

    cList<double> t = tmp.getRow(3);

    cIterator<double> itmp(t);
    itmp[0].set_new(x);
    itmp[1].set_new(y);
    itmp[2].set_new(z);
    itmp[3].set_new_const(1);
    tmp.setRow(3,t);

   // this->temp.nulling();


    cList<double> t1 = tmp.getRow(0);
    this->temp.addRow(t1);
    t1 = tmp.getRow(1);
    this->temp.addRow(t1);
    t1 = tmp.getRow(2);
    this->temp.addRow(t1);
    t1 = tmp.getRow(3);
    this->temp.addRow(t1);

    this->temp.setColCount(4);
    this->temp.setRowCount(4);



    return temp;
 }

cCamera :: cCamera()
{

}

cCamera :: ~cCamera()
{

}

cCamera :: cCamera(cPoint* position, cPoint* target, double pitch, double yaw, double roll)
{
    this->position = position->point_to_vector();
    this->target = target->point_to_vector();

    double one = 1;

    this->right.set_X(one);
    this->right.set_L(one);

    this->up.set_Y(one);
    this->up.set_L(one);

    this->direction.set_Z(one);
    this->direction.set_L(one);

    this->position.set_L(one);
    this->target.set_L(one);

    //this->temp = Matrix<double>(4,4);


}

void cCamera::set_right(cList<double> right)
{
    this->right = right;
}

void cCamera::set_up(cList<double> up)
{
    this->up = up;
}

void cCamera::set_direction(cList<double> direction)
{
    this->direction = direction;
}

void cCamera::set_position(cList<double> position)
{
    this->position = position;
}

void cCamera::set_target(cList<double> target)
{
    this->target = target;
}

cVector cCamera::get_right()
{
    return this->right;
}

cVector cCamera::get_up()
{
    return this->up;
}

cVector cCamera::get_direction()
{
    return this->direction;
}

cVector cCamera::get_position()
{
    return this->position;
}

cVector cCamera::get_target()
{
    return this->target;
}

void cCamera::change(BaseCameraChange* modification)//&
{
    modification->run(this);
}

void cCamera::pitch(double angle)
{
    //Matrix<double> transform = matrixrotation(this->get_right().get_X(), this->get_right().get_Y(), this->get_right().get_Z(), angle);
    //this->set_up(this->get_up() * transform);
    //this->set_direction(this->get_direction() * transform);
}

void cCamera::yaw(double angle)
{
    //Matrix<double> transform = matrixrotation(this->get_up().get_X(), this->get_up().get_Y(), this->get_up().get_Z(), angle);
    //this->set_right(this->get_right() * transform);
    //this->set_direction(this->get_direction() * transform);
}

void cCamera::roll(double angle)
{
    //Matrix<double> transform = matrixrotation(this->get_direction().get_X(), this->get_direction().get_Y(), this->get_direction().get_Z(), angle);
    //this->set_right(this->get_right() * transform);
    //this->set_up(this->get_up() * transform);///&&
}

void cCamera::rotateVerticalSphere(double angle)
{
    //Matrix<double> transform = matrixrotation(this->getDirection().getX(), this->getDirection().getY(), this->getDirection().getZ(), angle);
    //this->setUp(this->getUp() * transform);
    //this->setDirection(this->getDirection() * transform);
}

void cCamera::rotateHorizontalSphere(double angle)
{
    //Matrix<double> transform = matrixrotation(this->get_right().get_X(), this->get_right().get_Y(), this->get_right().get_Z(), angle);
    //this->setUp(this->getUp() * transform);
    //this->setDirection(this->getDirection() * transform);
}
