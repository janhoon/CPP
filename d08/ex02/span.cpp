//
// Created by Jan-hendrik HOON on 2017/06/01.
//

#include "span.hpp"

Span::Span() : array(new int[0]), count(0), size(0) {}

Span::~Span() {
    delete [] array;
}

Span::Span(Span const &span) {
    if (array) {
        delete [] array;
    }
    array = span.array;
    count = span.count;
}

Span &Span::operator=(Span const &span) {
    array = span.array;
    count = span.count;
    return *this;
}

unsigned int Span::shortestSpan() {
    return 0;
}

unsigned int Span::longestSpan() {
    return _high - _low;
}

void Span::addNumber(int i) {
    if (count == 0) {
        _low = i;
        _high = i;
    }
    if (i < _low) {
        _low = i;
    }
    if (i > _high) {
        _high = i;
    }
    if (count >= size) {
        Span temp(*this);
        if (array) {
            delete [] array;
        }
        array = new int[size++];
        for (unsigned int i = 0; i < temp.count; ++i) {
            array[i] = temp.array[i];
        }
    }
    array[count++] = i;
}

Span::Span(unsigned int i): array(new int[i]), count(0), size(i) {

}
