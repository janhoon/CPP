//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#ifndef D05_BUREAUCRAT_HPP
#define D05_BUREAUCRAT_HPP

#include <exception>
#include <iostream>

class Bureaucrat {
private:
    const std::string _name;
    unsigned int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const & name, unsigned int & grade);
    Bureaucrat(Bureaucrat const & bur);
    Bureaucrat &operator=(Bureaucrat const & rhs);
    ~Bureaucrat();

    class GradeTooHighException: public std::exception {
        virtual const char *what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char *what() const throw();
    };

    std::string getName() const;
    unsigned int getGrade() const;

    void incGrade();
    void decGrade();
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bur);


#endif //D05_BUREAUCRAT_HPP
