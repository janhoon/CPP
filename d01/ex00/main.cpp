#include "Pony.hpp"

int main(void)
{
    std::string pony1 = "victor";
    std::string pony2 = "ross";
    Pony* Victor = Pony(pony1).ponyOnTheHeap(pony1);
    Pony Ross = Victor->ponyOnTheStack(pony2);
    delete Victor;
    return 0;
}