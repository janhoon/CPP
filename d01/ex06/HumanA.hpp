//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP


#include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon &club);
    ~HumanA();
    void attack(void);
private:
    std::string _name;
    Weapon &_club;
};


#endif //EX06_HUMANA_HPP
