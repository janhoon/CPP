//
// Created by Jan-hendrik HOON on 2017/05/27.
//

#include "Ships.hpp"

Ships::Ships(){}

Ships::Ships(Ships const &ship) {

}

Ships &Ships::operator=(Ships const &ship) {
    return *this;
}

Ships::~Ships() {

}

int Ships::mvX(int dist) {
    _x += dist;
    return _x;
}

int Ships::mvY(int dist) {
    _y += dist;
    return _y;
}

void Ships::mvShip(int x, int y) {

}

void Ships::clearShip() {
    mvwaddch(_map, _y, _x, ' ');
}

void Ships::runFrame() {
    int ch;
    nodelay(stdscr, TRUE);
    noecho();
    keypad(stdscr, TRUE);
    while ((ch = wgetch(_map)) == ERR)  {}
    switch (ch) {
        case KEY_UP:
            clearShip();
            mvShip(mvX(1), mvY(0));
            mvaddstr(0, 0, "poes");
            break;
        case KEY_DOWN:
            clearShip();
            mvShip(mvX(-1), mvY(0));
            break;
        case KEY_LEFT:
            clearShip();
            mvShip(mvX(0), mvY(-1));
            break;
        case KEY_RIGHT:
            clearShip();
            mvShip(mvX(0), mvY(1));
            break;
        case 'Q': _active = 0;
            break;
        default: _active = 1;
    }
}

Ships::Ships(int x, int y) : _x(x), _y(y) {}