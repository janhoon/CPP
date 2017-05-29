//
// Created by Jan-hendrik HOON on 2017/05/25.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public :

    Fixed(void);
    Fixed(int const n);
    Fixed(float const n);
    Fixed(Fixed const & src);
    ~Fixed(void);
    Fixed & operator=(Fixed const & rhs);

    int getRawBits(void) const;
    float toFloat(void) const;

private:
    static const int _octal = 8;
    int _foo;
};
std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif //EX00_FIXED_HPP