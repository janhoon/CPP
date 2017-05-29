//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#ifndef EX03_NINJATRAP_HPP
#define EX03_NINJATRAP_HPP


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : ClapTrap {
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & claptrap);
    NinjaTrap & operator=(NinjaTrap const & rhs);
    ~NinjaTrap();

    void ninjaShoebox(NinjaTrap & target);
    void ninjaShoebox(ScavTrap & target);
    void ninjaShoebox(FragTrap & target);
};


#endif //EX03_NINJATRAP_HPP
