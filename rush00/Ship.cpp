//
// Created by Jan-hendrik HOON on 2017/05/27.
//

#include "Ship.hpp"

Ship::Ship() {

}

Ship::Ship(Ship const &ship) {

}

Ship &Ship::operator=(Ship const &ship) {
    return *this;
}

Ship::~Ship() {

}

Ship::Ship(int x, int y) : Ships(x, y) {
    mvwaddch(_map, _y, _x, 'A');
}

