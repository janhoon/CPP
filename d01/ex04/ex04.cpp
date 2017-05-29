#include <iostream>

int     main(void)
{
    std::string string = "HI THIS IS BRAIN";

    std::string* ptr_to_string = &string;
    std::string& ref_to_string = string;

    std::cout << "String pointer: " << *ptr_to_string << std::endl
              << "String reference: " << ref_to_string << std::endl;
    return 0;
}