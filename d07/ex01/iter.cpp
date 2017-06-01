#include <iostream>

template <class T>
void print(T input) {
    std::cout << input << "\n";
}

template <class T>
void printFirst(T input) {
    std::cout << input[0] << "\n";
}

template<typename T>
void iter(T *array, int length, void f(T)) {
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

int main() {
    std::string array[] = {"jan", "koos", "piet"};
    ::iter(array, 3, printFirst);
    int intArray[] = {1, 4, 5};
    ::iter(intArray, 3, print);
    return 0;
}