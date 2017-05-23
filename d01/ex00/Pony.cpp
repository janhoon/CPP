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

Pony::Pony(std::string color) : _color(color) {
    std::cout << "Hello  " << this->_color << std::endl;
}

Pony::~Pony(void) {
    std::cout << "RIP " << this->_color << " pony" << std::endl;
}

Pony *Pony::ponyOnTheHeap(void) {
    std::cout << "On the heap" << std::endl;
    return new Pony(this->_color);
}

Pony Pony::ponyOnTheStack(void) {
    std::cout << "On the stack" << std::endl;
    return Pony(this->_color);
}
