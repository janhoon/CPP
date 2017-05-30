#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
    Intern idiotOne;
    Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    try
    {
        ob.doBureaucracy("mutant pig termination", "Pigley");
    }
    catch (OfficeBlock::bureaucracyException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}