//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {
    return;
}

std::string const Weapon::getType() {
    std::string type = this->_type;
    return type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}