//
// Created by Jan-hendrik HOON on 2017/05/23.
//

#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde {
public:
    ZombieHorde(int n);
    ~ZombieHorde(void);
    std::string randomName(void);
    void announce(void);
private:
    Zombie** _zombie;
    int _total;
};


#endif //EX03_ZOMBIEHORDE_HPP
