//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_HP = 100;
    this->_maxHP = 100;
    this->_EP = 100;
    this->_maxHP = 100;
    this->_lvl = 1;
    this->_name = "";
    this->_mDMG = 30;
    this->_rDMG = 20;
    this->_aDMGr = 5;
    std::cout << _name << ": \"Glitching weirdness is a term of endearment, right? Never mind there's just two of me now\"" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_HP = 100;
    this->_maxHP = 100;
    this->_EP = 100;
    this->_maxHP = 100;
    this->_lvl = 1;
    this->_name = name;
    this->_mDMG = 30;
    this->_rDMG = 20;
    this->_aDMGr = 5;
    std::cout << _name << ": \"Let's get this party started!\"" << std::endl;
}

FragTrap::~FragTrap() {
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
    this->_HP = rhs._HP;
    this->_EP = rhs._EP;
    this->_lvl = rhs._lvl;
    this->_name = rhs._name;
    return *this;
}

FragTrap::FragTrap(FragTrap const &claptrap) : ClapTrap()  {
    _lvl = claptrap._lvl;
    _EP = claptrap._EP;
    _HP = claptrap._HP;
    _name = claptrap._name;
    std::cout << _name << ": \"Glitching weirdness is a term of endearment, right? Never mind there's just two of me now\"" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string &target) {
    std::string attacks[] = {"Lonely Pizza Party!", "Steel Nuts!", "Longest wheel sling!", "Lightsaber!", "Mean Words!!"};
    if (_EP <= 0) {
        _EP = 0;
        std::cout << _name
                  << ": \"Dangit, I'm out!\" (EP at 0%)"
                  << std::endl;
    } else {
        std::cout << _name
                  << " used special attack: "
                  << attacks[std::rand() % 5]
                  << " on "
                  << target
                  <<" (EP now at "
                  << _EP
                  << "%)"
                  << std::endl;
        _EP -= 25;
    }
}
