//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & claptrap);
    FragTrap & operator=(FragTrap const & rhs);
    ~FragTrap();

    void vaulthunter_dot_exe(std::string & target);
};


#endif //EX00_FRAGTRAP_HPP
