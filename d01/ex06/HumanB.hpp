//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP


#include "Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &club);
    void attack();
private:
    std::string _name;
    Weapon *_weapon;
};


#endif //EX06_HUMANB_HPP
