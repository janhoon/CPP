//
// Created by Jan-hendrik HOON on 2017/06/03.
//

#ifndef RUSH01_TIME_HPP
#define RUSH01_TIME_HPP

#include <ctime>
#include <iostream>
#include <ncurses.h>

class TimeNow {
public:
    TimeNow();
    TimeNow(TimeNow const & time);
    TimeNow &operator=(TimeNow const & time);
    ~TimeNow();

    virtual void update();
};


#endif //RUSH01_TIME_HPP
