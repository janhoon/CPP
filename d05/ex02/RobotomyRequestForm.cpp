//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("A Presidential Form", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name, 72, 45) {}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form): Form(form) {}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form) {
    this->setSigned(form.isSigned());
    return *this;
}

void RobotomyRequestForm::action() const {
    if ((std::rand() % 2) == 1) {
        std::cout << "\033[1;34m* MAKES DRILLING NOISES *\033[0m\n";
        std::cout << getName() << " has been robotomized successfully! \n";
    } else {
        std::cout << "\033[1;31mFailed to robotomize: \033[0m" << getName() << std::endl;
    }
    Form::action();
}
