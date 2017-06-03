//
// Created by Jan-hendrik HOON on 2017/06/01.
//

#include <iostream>
#include <algorithm>
#include "span.hpp"

Span::Span(): _size(0), _count(0) {}

Span::~Span() {

}

Span::Span(Span const &span) {
    this->_array = span._array;
    _size = span._size;
    _count = span._count;
}

Span &Span::operator=(Span const &span) {
    this->_array = span._array;
    _size = span._size;
    _count = span._count;
    return *this;
}

Span::Span(unsigned int i): _size(i), _count(0) {}

void Span::addNumber(int x) {
    if (_count <= _size) {
        if (_count == 0) {
            _max = x;
            _min = x;
        } else if (_count == 1) {
            if (x >= _max) {
                _max = x;
            } else {
                _min = x;
            }
        } else {
            if (x < _min) {
                _min = x;
            }
            if (x > _max) {
                _max = x;
            }
        }
        _array.push_back(x);
        _count++;
    } else {
        throw std::exception();
    }
}

unsigned int Span::shortestSpan() {
    std::sort(_array.begin(), _array.end());
    unsigned int shortest;
    for (std::vector<int>::iterator it = _array.begin(); it != _array.end(); ++it) {
        if ()
    }
}

unsigned int Span::longestSpan() {
    if (_min < 0 && _max < 0) {
        return static_cast<unsigned>((_max * -1) - (_min * -1));
    } else if (_min < 0) {
        return static_cast<unsigned>(_max + (_min * -1));
    } else {
        return static_cast<unsigned>(_max - _min);
    }
}
