//
// Created by Jan-hendrik HOON on 2017/05/23.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

Zombie::~Zombie(void) {
    return;
}

void Zombie::anounce(void) {
    std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}