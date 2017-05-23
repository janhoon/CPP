//
// Created by Jan-hendrik HOON on 2017/05/23.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP


#include <string>
#include "Zombie.hpp"

class ZombieEvent {
public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);

private:
    std::string _type;
};


#endif //EX02_ZOMBIEEVENT_HPP
