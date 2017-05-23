//
// Created by Jan-hendrik HOON on 2017/05/23.
//

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {}

ZombieEvent::~ZombieEvent(void) {
    return;
}

void ZombieEvent::setZombieType(std::string type, Zombie* zombie) {
    zombie->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, this->_type);
}