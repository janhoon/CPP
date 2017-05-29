//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
private:
    int _HP;
    const int _maxHP;
    int _EP;
    const int _maxEP;
    unsigned int _lvl;
    std::string _name;
    const int _mDMG;
    const int _rDMG;
    const int _aDMGr;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & claptrap);
    ScavTrap & operator=(ScavTrap const & rhs);
    ~ScavTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer();
};

#endif //EX01_SCAVTRAP_HPP
