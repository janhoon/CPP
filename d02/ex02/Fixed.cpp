//
// Created by Jan-hendrik HOON on 2017/05/25.
//

#include "Fixed.hpp"

Fixed::Fixed(void) : _foo(0)
{
    return;
}

Fixed::Fixed(int const n) : _foo(n)
{
    this->_foo = roundf(n*pow(2, this->_octal));
    return;
}

Fixed::Fixed(float const n) : _foo(n)
{
    this->_foo = roundf(n*pow(2, this->_octal));
    return;
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;

    return;
}

Fixed::~Fixed(void)
{
    return;
}

Fixed &    Fixed::operator=(Fixed const & rhs)
{
    if (this != &rhs)
        this->_foo = rhs.toFloat();
    return *this;
}

Fixed &    Fixed::operator*(Fixed const & rhs)
{
    if (this != &rhs)
        this->_foo = this->_foo * rhs.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
    o << i.toFloat();
    return o;
}

Fixed     Fixed::operator++(int)
{
    float fokjan;
    fokjan = this->_foo/pow(2, this->_octal);
    this->_foo = roundf((this->_foo + 1)/pow(2, this->_octal)*pow(2, this->_octal));
    return fokjan;
}

Fixed     Fixed::operator++()
{
    float o = this->_foo;
    o = o + 1;
    o = o/pow(2, this->_octal);
    this->_foo = roundf(o*pow(2, this->_octal));
    return o;
}

int Fixed::getRawBits(void) const
{
    return this->_foo;
}

float Fixed::toFloat(void) const
{
    float o = this->_foo;
    o = o/pow(2, this->_octal);
    return o;
}

int Fixed::toInt(void) const
{
    return this->_foo/pow(2, this->_octal);
}

Fixed & Fixed::max(Fixed & fix1, Fixed & fix2) {
    if (fix1.getRawBits() > fix2.getRawBits())
        return(fix1);
    return(fix2);
}

Fixed const & Fixed::max(Fixed const & fix1,  Fixed const & fix2) {
    if (fix1.getRawBits() > fix2.getRawBits())
        return(fix1);
    return(fix2);
}

Fixed & Fixed::min(Fixed & fix1, Fixed & fix2) {
    if (fix1.getRawBits() < fix2.getRawBits())
        return(fix1);
    return(fix2);
}

Fixed const & Fixed::min(Fixed const & fix1,  Fixed const & fix2) {
    if (fix1.getRawBits() < fix2.getRawBits())
        return(fix1);
    return(fix2);
}
