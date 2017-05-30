//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#ifndef D05_FORM_HPP
#define D05_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
    const std::string _name;
    bool _formSigned;
    const unsigned int _minGrade;
    const unsigned int _execGrade;
public:
    Form();
    Form(std::string const & name, unsigned int & grade);
    Form(Form const & bur);
    Form &operator=(Form const & rhs);
    ~Form();

    class GradeTooHighException: public std::exception {
        virtual const char *what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char *what() const throw();
    };

    std::string getName() const;
    unsigned int getGrade() const;
    bool isSigned() const;

    void beSigned(Bureaucrat &bur);
};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif //D05_FORM_HPP
