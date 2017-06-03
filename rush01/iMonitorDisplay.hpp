//
// Created by Jan-hendrik HOON on 2017/06/03.
//

#ifndef RUSH01_IMONITORDISPLAY_HPP
#define RUSH01_IMONITORDISPLAY_HPP


#include <exception>
#include <iostream>

#include "iMonitorModule.hpp"

class iMonitorDisplay {
public:
    iMonitorDisplay();
    iMonitorDisplay(std::string gui);
    iMonitorDisplay(iMonitorDisplay const & iMonitorDisplay1);
    iMonitorDisplay &operator=(iMonitorDisplay const & iMonitorDisplay1);
    virtual ~iMonitorDisplay();

    class DisplayNotAvailable : public std::exception{
    public:
        virtual const char* what() const throw();
    };

    void update();
    WINDOW *getWin();
    bool isActive();
protected:
    iMonitorModule _module;
    WINDOW *_win;
    bool _active;
};


#endif //RUSH01_IMONITORDISPLAY_HPP
