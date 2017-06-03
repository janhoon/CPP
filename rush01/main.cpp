#include <iostream>
#include "iMonitorModule.hpp"
#include "iMonitorDisplay.hpp"

int main(int argc, char **argv) {
    try {
        WINDOW *win;
        if (argc == 1) {
            iMonitorDisplay noGui("noGui");
            win = noGui.getWin();
            wtimeout(win, 0);

            while (noGui.isActive()) {
                noGui.update();
            }
        } else if (std::strcmp(argv[1], "-gui") == 0) {
            iMonitorDisplay gui("gui");
            while (gui.isActive()) {

            }
        } else {
            throw iMonitorDisplay::DisplayNotAvailable();
        }
    } catch (iMonitorDisplay::DisplayNotAvailable & e) {
        std::cout << e.what() << "\n";
    }
    return 0;
}