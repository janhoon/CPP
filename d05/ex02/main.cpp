#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    std::srand(std::time(0));
    try {
        unsigned int setGrade = 150;
        Bureaucrat koos("koos", setGrade);
        Bureaucrat jan(koos);
        Bureaucrat piet = koos;
        setGrade = 5;
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
        std::cout << "<----- 3 New Forms(ex02) ----->" << std::endl;
        ShrubberyCreationForm shrub("shrub");
        std::cout << shrub << std::endl;
        RobotomyRequestForm rob("rob");
        std::cout << rob << std::endl;
        PresidentialPardonForm trump("trump");
        std::cout << trump << std::endl;
        rob.execute(albert);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}