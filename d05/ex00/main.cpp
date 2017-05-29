#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    try {
        unsigned int setGrade = 149;
        Bureaucrat koos("koos", setGrade);
        Bureaucrat jan(koos);
        Bureaucrat piet = koos;
        std::cout << koos.getGrade() << std::endl;
        std::cout << piet << std::endl;
        koos.incGrade();
        koos.incGrade();
        std::cout << koos << std::endl;
        koos.decGrade();
        koos.decGrade();
        koos.decGrade();
        std::cout << koos << std::endl;
        koos.decGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}