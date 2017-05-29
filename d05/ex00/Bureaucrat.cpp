//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("\"unknown\""), _grade(150)  {

}

Bureaucrat::Bureaucrat(const std::string & name, unsigned int & grade): _name(name), _grade(grade) {
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

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bur) {
    o << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return o;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Current grade too HIGH");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Current grade too LOW");
}
