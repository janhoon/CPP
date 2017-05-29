//
// Created by Jan-hendrik HOON on 2017/05/27.
//

#include <iostream>
#include "GameEvent.hpp"

GameEvent::GameEvent() {
    initscr();
    _map = newwin(0, 0, 0, 0);
}

GameEvent::GameEvent(GameEvent const &intance) {

}

GameEvent &GameEvent::operator=(GameEvent const &instance) {
    return *this;
}

GameEvent::~GameEvent() {
    endwin();
}

int GameEvent::isActive() {
    return _active;
}
