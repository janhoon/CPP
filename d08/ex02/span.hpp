//
// Created by Jan-hendrik HOON on 2017/06/01.
//

#ifndef EX02_SPAN_HPP
#define EX02_SPAN_HPP


class Span {
private:
    int *array;
    int _low;
    int _high;
    unsigned int count;
    unsigned int size;
public:
    Span();
    Span(unsigned int i);
    Span(Span const & span);
    Span &operator=(Span const & span);
    virtual ~Span();

    unsigned int shortestSpan();
    unsigned int longestSpan();

    void addNumber(int i);
};


#endif //EX02_SPAN_HPP
