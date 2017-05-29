//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_HP = 100;
    this->_maxHP = 100;
    this->_EP = 50;
    this->_maxHP = 50;
    this->_lvl = 1;
    this->_name = "";
    this->_mDMG = 20;
    this->_rDMG = 15;
    this->_aDMGr = 3;
    std::cout << _name << ": \"This time it'll be awesome, I promise!\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_HP = 100;
    this->_maxHP = 100;
    this->_EP = 50;
    this->_maxHP = 50;
    this->_lvl = 1;
    this->_name = name;
    this->_mDMG = 20;
    this->_rDMG = 15;
    this->_aDMGr = 3;
    std::cout << _name << ": \"Hey everybody! Check out my package!\"" << std::endl;
}

ScavTrap::~ScavTrap() {
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
    this->_HP = rhs._HP;
    this->_EP = rhs._EP;
    this->_lvl = rhs._lvl;
    this->_name = rhs._name;
    return *this;
}

ScavTrap::ScavTrap(ScavTrap const &claptrap) : ClapTrap() {
    _lvl = claptrap._lvl;
    _EP = claptrap._EP;
    _HP = claptrap._HP;
    _name = claptrap._name;
    std::cout << _name << ": \"This time it'll be awesome, I promise!\"" << std::endl;
}

void ScavTrap::challengeNewcomer() {
    std::string challenges[] = {
            "see who can count to ten the fastest!",
            "to answer how many fingers he is holding behind his back",
            "lick his own elbow",
            "to answer how many wood could a wood chuck chuck if a would chuck could chuck wood",
            "dance off!"
    };
    std::cout << _name
              << " challenged a newcomer to "
              << challenges[std::rand() % 5]
              << std::endl;
}