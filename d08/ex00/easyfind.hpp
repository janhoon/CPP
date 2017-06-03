//
// Created by Jan-hendrik HOON on 2017/06/01.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <exception>

template <class T>
bool easyfind(T &one, int two) {
    for (typename T::iterator it = one.begin(); it !=one.end(); ++it) {
        if (*it == two) {
            return 1;
        }
    }
    throw std::exception();
}

#endif //EX00_EASYFIND_HPP
