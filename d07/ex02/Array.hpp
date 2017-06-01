//
// Created by Jan-hendrik HOON on 2017/06/01.
//

#ifndef EX2_ARRAY_HPP
#define EX2_ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array {
public:
    Array(): _size(0), _count(0) {
        std::cout << "constructor \n";
        _array = new T[0];
    }

    Array(unsigned int n): _size(n), _count(0) {
        std::cout << "constructor \n";
        _array = new T[_size];
    }

    Array(const Array & array) {
        _size = array._size;
        _count = array._count;
        _array = new T[_size];
        for (unsigned int i = 0; i < _count; i++) {
            _array[i] = array[i];
        }
    }

    ~Array() {
        std::cout << "destructor \n";
        if (_array) {
            delete [] _array;
        }
    }

    Array&operator=(const Array &array) {
        if (this != &array) {
            _size = array._size;
            _count = array._count;
            if (_array) {
                delete [] _array;
            }
            _array = new T[_size];
            for (unsigned int i = 0; i < _count; i++) {
                _array[i] = array[i];
            }
        }
        return *this;
    }


    T &operator [] (int i) const {
        if (i < static_cast<int>(_size) && i >= 0) {
            return _array[i];
        } else {
            throw badAccess();
        }
    }

    int size() const {
        return _size;
    }


    class badAccess : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "\033[1;31mBAD ACCESS ATTEMPT\033[0m\n";
        }
    };
private:
    unsigned int _size;
    unsigned int _count;
    T * _array;
};

#endif //EX2_ARRAY_HPP
