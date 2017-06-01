#include "Array.hpp"

int main() {
    try {
        //___INTS_______
        Array<int> i(10);
        i[0] = 1;
        i[1] = 40;
        std::cout << i.size() << "\n";
        std::cout << i[1] << "\n";
        //___STRINGS____
        Array<std::string> s(200);
        s[0] = "ross";
        s[1] = "victor";
        s[2] = "eben";
        std::cout << i.size() << "\n";
        std::cout << s[0] << "\n";
        //___EMPTY______
        Array<int> intigers;
        Array<std::string> strings;
    } catch (Array<int>::badAccess & e) {
        std::cout << e.what() << "\n";
    }
    return 0;
}