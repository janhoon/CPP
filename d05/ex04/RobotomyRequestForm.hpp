//
// Created by Jan-hendrik HOON on 2017/05/29.
//

#ifndef D05_ROBOTOMYREQUESTFORM_HPP
#define D05_ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(RobotomyRequestForm const & form);
    RobotomyRequestForm &operator=(RobotomyRequestForm const & form);
    ~RobotomyRequestForm();

    void action() const;
};


#endif //D05_ROBOTOMYREQUESTFORM_HPP
