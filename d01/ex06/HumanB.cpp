//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {
    return;
}

void HumanB::setWeapon(Weapon &club) {
    this->_weapon = &club;
}

void HumanB::attack() {
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}