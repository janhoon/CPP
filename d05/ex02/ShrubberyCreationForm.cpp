//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("A Shrubbery Form", 145, 137) {}



ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form): Form(form) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
    this->_formSigned = rhs._formSigned;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137) {}
