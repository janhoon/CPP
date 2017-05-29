//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _club(club), _name(name) {}

HumanA::~HumanA() {
    return;
}

void HumanA::attack() {
    std::cout << this->_name << " attacks with his " << this->_club.getType() << std::endl;
}