//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#ifndef D05_PRESIDENTIALPARDONFORM_HPP
#define D05_PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(PresidentialPardonForm const & form);
    ~PresidentialPardonForm();

};


#endif //D05_PRESIDENTIALPARDONFORM_HPP
