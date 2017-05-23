#include <iostream>
#include "ZombieEvent.hpp"

void randomChump(ZombieEvent env) {
    std::string name[] = {"Ross", "Victor", "Jan", "Koos", "Pieter", "Jaco", "Albert", "Arno"};
    int name_no = std::rand() % 8;
    Zombie* chump = env.newZombie(name[name_no]);
    chump->anounce();
    delete chump;
}

int main() {
    ZombieEvent env;
    env.setZombieType("Armless");
    randomChump(env);
}