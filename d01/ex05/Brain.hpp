//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#ifndef EX05_BRAIN_HPP
# define EX05_BRAIN_HPP
# include <iostream>
# include <sstream>

class   Brain
{
public:
    static Brain*       getInstance(void);
    std::string const   identify(void);
private:
    Brain();
};

#endif //EX05_BRAIN_HPP
