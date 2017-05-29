//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#include "Form.hpp"

Form::Form() : _name("A random from"), _formSigned(0), _minGrade(150) {}

Form::Form(std::string const &name, unsigned int &grade) : _name(name), _formSigned(0), _minGrade(grade) {
    if (_minGrade > 150) {
        throw (GradeTooHighException());
    } else if (_minGrade == 0) {
        throw  (GradeTooLowException());
    }
}

Form::Form(Form const &bur): _name(bur._name), _formSigned(bur._formSigned), _minGrade(bur._minGrade) {}

Form &Form::operator=(Form const &rhs) {
    this->_formSigned = rhs._formSigned;
    return *this;
}

Form::~Form() {

}

std::string Form::getName() const {
    return _name;
}

unsigned int Form::getGrade() const {
    return _minGrade;
}

bool Form::isSigned() const {
    return _formSigned;
}

void Form::beSigned(Bureaucrat &bur) {
    if (bur.getGrade() > _minGrade) {
        bur.signForm(0, _name);
        throw GradeTooLowException();
    } else {
        bur.signForm(1, _name);
        _formSigned = 1;
    }
}

const char *Form::GradeTooHighException::what() const throw() {
    return "\033[1;31mGRADE TOO HIGH\033[0m\n";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "\033[1;31mGRADE TOO LOW\033[0m\n";
}


std::ostream &operator<<(std::ostream &o, Form const &form) {
    if (form.isSigned()) {
        o << "Form " << form.getName() << " that requires a grade of at least "
          << form.getGrade() << " was signed";
    } else {
        o << "Form " << form.getName() << " that requires a grade of at least "
          << form.getGrade() << " is still unsigned";
    }
    return o;
}