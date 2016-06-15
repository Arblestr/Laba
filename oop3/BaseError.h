#ifndef BASEERROR_H
#define BASEERROR_H
#include <exception>

class BaseError: public std::exception
{
public:
    virtual const char* what() = 0;
};

#endif // BASEERROR_H
