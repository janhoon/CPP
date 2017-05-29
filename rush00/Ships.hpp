//
// Created by Jan-hendrik HOON on 2017/05/27.
//

#ifndef RUSH00_SHIPS_HPP
#define RUSH00_SHIPS_HPP


#include "GameEvent.hpp"

class Ships : public GameEvent {
protected:
    int _x;
    int _y;
public:
    Ships();
    Ships(int x, int y);
    Ships(Ships const & ship);
    Ships &operator=(Ships const & ship);
    ~Ships();

    int mvX(int dist);
    int mvY(int dist);
    void mvShip(int x, int y);
    void clearShip();
    void runFrame();
};


#endif //RUSH00_SHIPS_HPP
