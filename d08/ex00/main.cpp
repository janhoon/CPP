#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    std::vector<char> number;
    number.push_back('1');
    number.push_back('2');
    number.push_back('3');
    if (easyfind(number, '3')) {
        std::cout << "found it \n";
    }
    std::string word = "he!lo";
    if (easyfind(word, '!')) {
        std::cout << "found it \n";
    }
    return 0;
}