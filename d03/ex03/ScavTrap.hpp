//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & claptrap);
    ScavTrap & operator=(ScavTrap const & rhs);
    ~ScavTrap();

    void challengeNewcomer();
};

#endif //EX01_SCAVTRAP_HPP
