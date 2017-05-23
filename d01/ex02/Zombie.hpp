//
// Created by Jan-hendrik HOON on 2017/05/23.
//

#ifndef EX02_ZOMBIE_H
#define EX02_ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
public:
    std::string _type;
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void anounce(void);
private:
    std::string _name;
};


#endif //EX02_ZOMBIE_H
