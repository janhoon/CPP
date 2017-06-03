//
// Created by Jan-hendrik HOON on 2017/06/01.
//

#ifndef EX02_SPAN_HPP
#define EX02_SPAN_HPP

#include <vector>

class Span {
private:
    std::vector<int> _array;
    unsigned int _size;
    unsigned int _count;
    int _min;
    int _max;
public:
    Span();
    Span(unsigned int i);
    Span(Span const & span);
    Span &operator=(Span const & span);
    virtual ~Span();

    void addNumber(int x);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};


#endif //EX02_SPAN_HPP
