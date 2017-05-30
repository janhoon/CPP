#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

        std::cout << "<----- Start Forms(ex01) ----->\n" << std::endl;

        Form act1("Acount1", setGrade);
        std::cout << act1 << std::endl;
        act1.beSigned(albert);
        std::cout << act1 << std::endl;

        std::cout << "<----- 3 New Forms(ex02) ----->\n" << std::endl;

        ShrubberyCreationForm shrub("shrub");
        std::cout << shrub << std::endl;
        RobotomyRequestForm rob("rob");
        std::cout << rob << std::endl;
        PresidentialPardonForm trump("trump");
        std::cout << trump << std::endl;
        rob.execute(albert);

        std::cout << "<------ Interns (ex03) ------->\n" << std::endl;

        Intern ross;
        Form* newRob;
        newRob = ross.makeForm("Robotomy Request", "Bender");
        std::cout << *newRob << std::endl;
        delete newRob;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}