#include "Pony.hpp"

int main(void)
{
    Pony Ross = Pony("Ross");
    Ross.ponyOnTheStack();
    Pony* Victor = Pony("Victor").ponyOnTheHeap();
    delete Victor;
    return 0;
}