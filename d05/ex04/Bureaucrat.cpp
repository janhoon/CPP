//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("\"unknown\""), _grade(150)  {

}

Bureaucrat::Bureaucrat(const std::string & name, int const & grade): _name(name), _grade((unsigned int)grade) {
    if (_grade > 150) {
        throw (GradeTooHighException());
    } else if (_grade == 0) {
        throw  (GradeTooLowException());
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur) : _name(bur._name), _grade(bur._grade) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {

}

std::string Bureaucrat::getName() const {
    return this->_name;
}

unsigned int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::incGrade() {
    _grade--;
    if (_grade == 0) {
        throw (GradeTooLowException());
    }
}

void Bureaucrat::decGrade() {
    _grade++;
    if (_grade > 150) {
        throw (GradeTooHighException());
    }
}

void Bureaucrat::signForm(bool success, std::string form) {
    if (success == 1) {
        std::cout << _name << " signs " << form << std::endl;
    } else {
        std::cout << _name << " could not sign " << form << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form) const {
    if (form.isSigned()) {
        std::cout << getName() << " executes " << form.getName() << std::endl;
    } else {
        std::cout << getName() << " failed to execute " << form.getName() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bur) {
    o << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return o;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("\033[1;31mGRADE TOO HIGH\033[0m\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("\033[1;31mGRADE TOO LOW\033[0m\n");
}
