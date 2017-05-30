//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("A Shrubbery Form", 145, 137) {}



ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form): Form(form) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
    this->setSigned(rhs.isSigned());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137) {}

void ShrubberyCreationForm::action() const{
    std::ofstream target;
    std::string filename = "../" + getName() + "_shrubbery";
    target.open(filename, std::fstream::out);
    target << "         x                  x         \n"
           << "        xxx                xxx        \n"
           << "       xxxxx              xxxxx       \n"
           << "      xxxxxxx            xxxxxxx      \n"
           << "     xxxxxxxxx          xxxxxxxxx     \n"
           << "    xxxxxxxxxxx        xxxxxxxxxxx    \n"
           << "   xxxxxxxxxxxxx      xxxxxxxxxxxxx   \n"
           << "  xxxxxxxxxxxxxxx    xxxxxxxxxxxxxxx  \n"
           << " xxxxxxxxxxxxxxxxx  xxxxxxxxxxxxxxxxx \n"
           << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n"
           << "        xxx                xxx        \n"
           << "        xxx                xxx        \n"
           << "        xxx                xxx        \n";
    target.close();
    Form::action();
}

