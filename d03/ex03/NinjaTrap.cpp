//
// Created by Jan-hendrik HOON on 2017/05/26.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
    this->_HP = 60;
    this->_maxHP = 60;
    this->_EP = 120;
    this->_maxHP = 120;
    this->_lvl = 1;
    this->_name = "";
    this->_mDMG = 60;
    this->_rDMG = 5;
    this->_aDMGr = 0;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
    this->_HP = 60;
    this->_maxHP = 60;
    this->_EP = 120;
    this->_maxHP = 120;
    this->_lvl = 1;
    this->_name = name;
    this->_mDMG = 60;
    this->_rDMG = 5;
    this->_aDMGr = 0;
}

NinjaTrap::~NinjaTrap() {

}

NinjaTrap::NinjaTrap(NinjaTrap const &claptrap) {
    _lvl = claptrap._lvl;
    _EP = claptrap._EP;
    _HP = claptrap._HP;
    _name = claptrap._name;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
    this->_HP = rhs._HP;
    this->_EP = rhs._EP;
    this->_lvl = rhs._lvl;
    this->_name = rhs._name;
    return *this;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & target) {
    std::cout << "Thew a shoebox at " << target._name << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & target) {
    std::cout << "Thew a shoebox at " << target._name << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & target) {
    std::cout << "Thew a shoebox at " << target._name << std::endl;
}
