#include <iostream>
#include "ZombieHorde.hpp"

int main() {
    std::srand(time(NULL));
    int n = 10;
    ZombieHorde horde = ZombieHorde(n);
    horde.announce();
    return 0;
 }