//
// Created by Jan-hendrik HOON on 2017/06/03.
//

#include "iMonitorDisplay.hpp"

iMonitorDisplay::~iMonitorDisplay() {
    endwin();
}

iMonitorDisplay::iMonitorDisplay() {
    initscr();
}

iMonitorDisplay::iMonitorDisplay(const iMonitorDisplay &iMonitorDisplay1) {

}

iMonitorDisplay &iMonitorDisplay::operator=(iMonitorDisplay const &iMonitorDisplay1) {
    return *this;
}

iMonitorDisplay::iMonitorDisplay(std::string gui):_module(iMonitorModule()), _active(1) {
    if (gui == "noGui") {
        initscr();
        nodelay(stdscr, TRUE);
        keypad(stdscr, TRUE);
        _win = newwin(getmaxy(stdscr), getmaxx(stdscr), 0, 0);
    } else if (gui == "gui") {

    }
}

void iMonitorDisplay::update() {
    int ch;
    nodelay(stdscr, TRUE);
    noecho();
    keypad(stdscr, TRUE);
    while (_active) {
        if ((ch = wgetch(_win)) == ERR) {
            clear();
            _module.update();
            refresh();
        }
        else {
            switch (ch) {
                case 27:
                    if (getch() == ERR)
                        _active = 0;
                    break;
                default:
                    _active = 1;
            }
            clear();
            _module.update();
            refresh();
        }
    }
}

WINDOW *iMonitorDisplay::getWin() {
    return _win;
}

bool iMonitorDisplay::isActive() {
    return _active;
}

const char *iMonitorDisplay::DisplayNotAvailable::what() const throw() {
    return "\033[1;31mIncorrect argument. Please use ./ft_gkrellm (without args or with -gui)\033[0m\n";
}
