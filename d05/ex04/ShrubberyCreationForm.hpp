//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#ifndef D05_SHRUBBERYCREATIONFORM_HPP
#define D05_SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm(ShrubberyCreationForm const & form);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const & fomr);
    ~ShrubberyCreationForm();

    void action() const;
};


#endif //D05_SHRUBBERYCREATIONFORM_HPP
