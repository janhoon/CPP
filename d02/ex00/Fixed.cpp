//
// Created by Jan-hendrik HOON on 2017/05/25.
//

#include "Fixed.hpp"

Fixed::Fixed(void) : _foo(0)
{
    std::cout <<"Default construtor"<<std::endl;
    return;
}

Fixed::Fixed(int const n) : _foo(n)
{
    this->_foo = roundf(n*pow(2, this->_octal));
    std::cout <<"Int constructor called"<<std::endl;

    return;
}

Fixed::Fixed(float const n) : _foo(n)
{
    this->_foo = roundf(n*pow(2, this->_octal));
    std::cout <<"Float constructor called"<<std::endl;
    return;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called"<<std::endl;
    *this = src;

    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called"<<std::endl;

    return;
}

Fixed &    Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Asignment operator called"<<std::endl;
    if (this != &rhs)
        this->_foo = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << i.toFloat();
    return o;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called"<<std::endl;
    return this->_foo;
}

float Fixed::toFloat(void) const
{
    float o = this->_foo;
    o = o/pow(2, this->_octal);
    return o;
}