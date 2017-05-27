/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janhoon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 10:19:41 by janhoon           #+#    #+#             */
/*   Updated: 2017/05/23 10:19:44 by janhoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color) {
    std::cout << "Hello " << color << std::endl;
}

Pony::~Pony(void) {
    std::cout << "RIP " << this->_color << std::endl;
}

Pony *Pony::ponyOnTheHeap(std::string color) {
    this->_color = color;
    std::cout << "To the heap" << std::endl;
    return new Pony(this->_color);
}

Pony Pony::ponyOnTheStack(std::string color) {
    this->_color = color;
    std::cout << "To the stack" << std::endl;
    return Pony(this->_color);
}
