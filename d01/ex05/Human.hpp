//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP
# include "Brain.hpp"

class   Human
{
public:
    static std::string  identify();
    static Brain    getBrain();

private:
    static Brain const _brain;
};

#endif
