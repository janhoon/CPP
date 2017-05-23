#include <iostream>
#include "ZombieEvent.hpp"

void randomChump(void) {
    std::string name[] = {"Ross", "Victor", "Jan", "Koos", "Poes", "Jaco", "Albert", "Arno"};
    int name_no = std::rand() % 8;
    Zombie* chump = ZombieEvent().newZombie(name[name_no]);
    ZombieEvent().setZombieType("klein kak", chump);
    chump->anounce();
    delete chump;
}

int main() {
    std::srand(time(NULL));
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
}