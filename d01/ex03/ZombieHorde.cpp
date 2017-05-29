//
// Created by Jan-hendrik HOON on 2017/05/23.
//

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
    this->_total = n;
    this->_zombie = new Zombie*[n];
    for (int i = 0; i < n; i++) {
        this->_zombie[i] = new Zombie(randomName(), "horde");
    }
}

ZombieHorde::~ZombieHorde(void) {
    delete this->_zombie;
    return;
}

std::string ZombieHorde::randomName() {
    std::string name[] = {"Ross", "Victor", "Jan", "Koos", "Pieter", "Jaco", "Albert", "Arno"};
    int name_no = std::rand() % 8;
    return name[name_no];
}

void ZombieHorde::announce(void) {
    for (int i = 0; i < this->_total; i++) {
        this->_zombie[i]->announce();
    }
}