//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP


#include <iostream>

class FragTrap {
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
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & claptrap);
    FragTrap & operator=(FragTrap const & rhs);
    ~FragTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string & target);
};


#endif //EX00_FRAGTRAP_HPP
