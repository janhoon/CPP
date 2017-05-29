//
// Created by Jan-hendrik HOON on 2017/05/27.
//

#ifndef RUSH00_SHIP_HPP
#define RUSH00_SHIP_HPP


#include "Ships.hpp"

class Ship : public Ships{
private:
public:
    Ship();
    Ship(int x, int y);
    Ship(Ship const & ship);
    Ship &operator=(Ship const & ship);
    ~Ship();
};


#endif //RUSH00_SHIP_HPP
