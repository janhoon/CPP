//
// Created by Jan-hendrik HOON on 2017/06/03.
//

#include "Time.hpp"

TimeNow::TimeNow() {

}

TimeNow::TimeNow(TimeNow const &time) {

}

TimeNow &TimeNow::operator=(TimeNow const &time) {
    return *this;
}

TimeNow::~TimeNow() {

}

void TimeNow::update() {
    std::time_t now = std::time(nullptr);
    mvprintw(2, 50, "DATETIME:");
    mvprintw(2, 50, (std::asctime(std::localtime(&now))));
}
