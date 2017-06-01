#include <iostream>
#include <iomanip>

int main(int argc, char **argv) {
    if (argc == 2) {
        double _double = std::atof(argv[1]);
        float _float = static_cast<float>(_double);
        int _int = static_cast<int>(_double);
        char _char = static_cast<char>(_double);
        if (std::strcmp(argv[1], "nan") != 0 && std::strcmp(argv[1], "+inf") != 0 && std::strcmp(argv[1], "-inf") != 0) {
            std::cout << "impossible" << "\n";
            std::cout << "impossible" << "\n";
        } else if (_char == 0) {
            std::cout << "Non Displayable" << "\n";
        }
        std::cout << _char << "\n";
        std::cout << _int << "\n";

        std::cout << std::fixed << std::setprecision(1) << _float << "f\n";
        std::cout << std::fixed << std::setprecision(1) << _double << "\n";
    } else {
        std::cout << "Enter only 1 argument!\n";
    }
}
