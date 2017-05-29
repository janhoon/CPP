//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP


#include <iostream>

class ClapTrap {
protected:
    int _HP;
    int _maxHP;
    int _EP;
    int _maxEP;
    unsigned int _lvl;
    std::string _name;
    int _mDMG;
    int _rDMG;
    int _aDMGr;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & claptrap);
    ClapTrap & operator=(ClapTrap const & rhs);
    ~ClapTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //EX02_CLAPTRAP_HPP
