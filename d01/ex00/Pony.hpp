/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janhoon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 10:20:06 by janhoon           #+#    #+#             */
/*   Updated: 2017/05/23 10:20:08 by janhoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
    public:
    Pony(std::string color);
    ~Pony(void);
    Pony *ponyOnTheHeap(void);
    Pony ponyOnTheStack(void);

    private:
    std::string _color;
};

#endif
