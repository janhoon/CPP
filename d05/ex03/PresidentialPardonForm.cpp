//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("A Presidential Form", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 25, 5) {}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form): Form(form) {}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form) {
    this->setSigned(form.isSigned());
    return *this;
}

void PresidentialPardonForm::action() const {
    std::cout << getName() << " has been pardoned by Zafod Beeblebrox.\n";
    Form::action();
}

