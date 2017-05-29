//
// Created by Jan-hendrik HOON on 2017/05/27.
//

#ifndef RUSH00_GAMEEVENT_HPP
#define RUSH00_GAMEEVENT_HPP


#include <ncurses.h>

class GameEvent {
protected:
    WINDOW * _map;
    int _active;
public:
    GameEvent();
    GameEvent(GameEvent const & intance);
    GameEvent &operator=(GameEvent const & instance);
    ~GameEvent();

    int isActive();
};


#endif //RUSH00_GAMEEVENT_HPP
