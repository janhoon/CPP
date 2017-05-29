//
// Created by Jan-hendrik HOON on 2017/05/24.
//

#include "Human.hpp"

std::string  Human::identify()
{
    return _brain.getInstance()->identify();
}

Brain        Human::getBrain()
{
    return *_brain.getInstance();
}