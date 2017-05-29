//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP


#include <string>

class Weapon {
public:
    Weapon(std::string type);
    ~Weapon();
    std::string const getType();
    void setType(std::string type);
private:
    std::string _type;
};


#endif //EX06_WEAPON_HPP
