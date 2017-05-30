//
// Created by Jan-hendrik HOON on 2017/05/30.
//

#ifndef D05_OFFICEBLOCK_HPP
#define D05_OFFICEBLOCK_HPP


#include "Intern.hpp"

class OfficeBlock {
public:
    OfficeBlock();
    ~OfficeBlock();

    void setIntern(Intern const & intern);
    void setSigner(Bureaucrat const & bur);
    void setExecutor(Bureaucrat const & bur);

    bool checkOffice();
    void doBureaucracy(std::string const & type, std::string const & name);

    class bureaucracyException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

private:
    OfficeBlock(OfficeBlock const & ob);
    OfficeBlock &operator=(OfficeBlock const & ob);

    Form * _job;
    Intern _intern;
    Bureaucrat _signer;
    Bureaucrat _executer;
    int _hired;
};


#endif //D05_OFFICEBLOCK_HPP
