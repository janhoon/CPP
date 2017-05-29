#include "Ship.hpp"

int main() {
    GameEvent play;
    Ships player1(4, 10);
    while (play.isActive()) {
        player1.runFrame();
    }
    return 0;
}