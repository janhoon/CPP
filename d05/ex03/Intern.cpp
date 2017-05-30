//
// Created by Jan-hendrik HOON on 2017/05/30.
//

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {

}

Intern::Intern(Intern const &intern) {
    *this = intern;
}

Intern::~Intern() {

}

Intern &Intern::operator=(Intern const &intern) {
    Intern *temp = new Intern(intern);
    delete temp;
    return *this;
}

Form *Intern::makeForm(std::string type, std::string name) {
    if (type == "Robotomy Request") {
        return (new RobotomyRequestForm(name));
    } else if (type == "Shrubbery Creation") {
        return (new ShrubberyCreationForm(name));
    } else if (type == "Presidential Pardon") {
        return (new PresidentialPardonForm(name));
    } else {
        return new Form();
    }
}
