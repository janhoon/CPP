//
// Created by Jan-hendrik HOON on 2017/05/23.
//

#ifndef EX02_ZOMBIE_H
#define EX02_ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
public:
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void anounce(void);
private:
    std::string _name;
    std::string _type;
};


#endif //EX02_ZOMBIE_H
