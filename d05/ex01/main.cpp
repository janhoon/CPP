#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        unsigned int setGrade = 100;
        Bureaucrat koos("koos", setGrade);
        Bureaucrat jan(koos);
        Bureaucrat piet = koos;
        setGrade = 50;
        std::cout << piet << std::endl;
        koos.incGrade();
        std::cout << koos << std::endl;
        koos.decGrade();
        Bureaucrat albert("Albert", setGrade);
        std::cout << jan << std::endl;
        std::cout << albert << std::endl;
        std::cout << "<----- Start Forms(ex01) ----->" << std::endl;
        Form act1("Acount1", setGrade);
        std::cout << act1 << std::endl;
        act1.beSigned(albert);
        std::cout << act1 << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}