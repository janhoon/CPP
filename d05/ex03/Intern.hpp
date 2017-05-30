//
// Created by Jan-hendrik HOON on 2017/05/30.
//

#ifndef D05_INTERN_HPP
#define D05_INTERN_HPP


#include "Form.hpp"

class Intern {
public:
    Intern();
    Intern(Intern const &intern);
    Intern &operator=(Intern const &intern);
    ~Intern();

    Form *makeForm(std::string type, std::string name);
};


#endif //D05_INTERN_HPP
