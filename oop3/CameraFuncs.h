#ifndef CAMERAFUNCS_H
#define CAMERAFUNCS_H

cCamera :: cCamera()
{

}

cCamera :: cCamera(cPoint& position, cPoint& target, double pitch, double yaw, double roll)
{
    this->position = position.point_to_vector();
    this->target = target.point_to_vector();

    double one = 1;

    this->right.set_X(one);
    this->right.set_L(one);

    this->up.set_Y(one);
    this->up.set_L(one);

    this->direction.set_Z(one);
    this->direction.set_L(one);

    this->position.set_L(one);
    this->target.set_L(one);
}

void Camera::set_right(cList<double> right)
{
    this->right = right;
}

void Camera::set_up(cList<double> up)
{
    this->up = up;
}

void Camera::set_direction(cList<double> direction)
{
    this->direction = direction;
}

void Camera::set_position(cList<double> position)
{
    this->position = position;
}

void Camera::set_target(cList<double> target)
{
    this->target = target;
}


#endif // CAMERAFUNCS_H
