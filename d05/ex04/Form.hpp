//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#ifndef D05_FORM_HPP
#define D05_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string   _name;
    bool                _formSigned;
    const unsigned int  _minGrade;
    const unsigned int  _execGrade;
public:
    Form();
    Form(std::string const & name, unsigned int signGrade, unsigned int execGrade);
    Form(std::string const & name, unsigned int & grade);
    Form(Form const & bur);
    Form &operator=(Form const & rhs);
    virtual ~Form();


    class GradeTooHighException: public std::exception {
        virtual const char *what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char *what() const throw();
    };

    //getters

    std::string getName() const;
    unsigned int getGrade() const;
    unsigned int getExe() const;
    bool isSigned() const;

    //setters
    void setSigned(bool i);

    void beSigned(Bureaucrat &bur);
    void execute(Bureaucrat const & executor) const;

    virtual void action() const;

};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif //D05_FORM_HPP
