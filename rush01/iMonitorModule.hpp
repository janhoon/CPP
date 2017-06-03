//
// Created by Jan-hendrik HOON on 2017/06/03.
//

#ifndef RUSH01_IMONITORMODULE_HPP
#define RUSH01_IMONITORMODULE_HPP

#include <iostream>
#include <ctime>
#include <ncurses.h>
#include "Time.hpp"

class iMonitorModule {
public:
    iMonitorModule();
    iMonitorModule(iMonitorModule const & iMonitorModule1);
    iMonitorModule &operator=(iMonitorModule const & iMonitorModule1);
    virtual ~iMonitorModule();

    bool isActive();
    void setAcitve(bool i);
    virtual void update();

private:
    bool active;
    TimeNow _time;
};


#endif //RUSH01_IMONITORMODULE_HPP
