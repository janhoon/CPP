/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janhoon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 12:37:43 by janhoon           #+#    #+#             */
/*   Updated: 2017/05/22 12:37:45 by janhoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"

Contacts::Contacts(void)
{
}

Contacts::~Contacts(void)
{
    return;
}

void Contacts::set(int customers, std::string fn, std::string ln,
                   std::string nn, std::string l, std::string pa,
                   std::string ea, std::string pn, std::string bd,
                   std::string fm, std::string uc, std::string ds)
{
    this->_id = customers;
    this->_fn = fn;
    this->_ln = ln;
    this->_nn = nn;
    this->_l = l;
    this->_pa = pa;
    this->_ea = ea;
    this->_pn = pn;
    this->_bd = bd;
    this->_fm = fm;
    this->_uc = uc;
    this->_ds = ds;
}

void Contacts::getName(void)
{
    std::string first;
    std::string last;
    std::string nick;

    if (this->_fn.length() > 10)
    {
        first = this->_fn.substr(0, 9) + ".";
    }
    else
    {
        first = this->_fn;
        for (unsigned long i = 0; i < (10 - this->_fn.length()); i++)
        {
            first = first + " ";
        }
    }
    if (this->_ln.length() > 10)
    {
        last = this->_ln.substr(0, 9) + ".";
    }
    else
    {
        last = this->_ln;
        for (unsigned long i = 0; i < (10 - this->_ln.length()); i++)
        {
            last = last + " ";
        }
    }
    if (this->_nn.length() > 10)
    {
        nick = this->_nn.substr(0, 9) + ".";
    }
    else
    {
        nick = this->_nn;
        for (unsigned long i = 0; i < (10 - this->_nn.length()); i++)
        {
            nick = nick + " ";
        }
    }

    std::cout << "|"
    << this->_id
    << "         |"
    << first
    << "|"
    << last
    << "|"
    << nick
    << "|"
    << std::endl;
}

void Contacts::get(void)
{
    std::cout << "Index: " << this->_id << std::endl
    << "First Name: " << this->_fn << std::endl
    << "Last Name: " << this->_ln << std::endl
    << "Nickname: " << this->_nn << std::endl
    << "Login: " << this->_l << std::endl
    << "Postal Address: " << this->_pa << std::endl
    << "Email Address: " << this->_ea << std::endl
    << "Phone Number: " << this->_pn << std::endl
    << "Birthday Date: " << this->_bd << std::endl
    << "Favourite Meal: " << this->_fm << std::endl
    << "Underwear Color: " << this->_uc << std::endl
    << "Darkest Secret: " << this->_ds << std::endl;
}

int main(void)
{
    Contacts contacts[8];
    int active = 1;
    int index = 0;
    while (active == 1)
    {
        std::string fn;
        std::string ln;
        std::string mn;
        std::string l;
        std::string pa;
        std::string ea;
        std::string nn;
        std::string pn;
        std::string bd;
        std::string fm;
        std::string uc;
        std::string ds;
        int selected;
        std::cout << "=>";
        std::string action;
        std::cin >> action;
        if (action.compare("EXIT") == 0)
        {
            active = 0;
        }
        else if (action.compare("ADD") == 0)
        {
            if (index == 8)
            {
                std::cout << "Phonebook Full!" << std::endl;
            }
            else
            {
                std::cout << "First Name: ";
                std::cin >> fn;
                std::cout << "Last Name: ";
                std::cin >> ln;
                std::cout << "Nickname: ";
                std::cin >> nn;
                std::cout << "Login: ";
                std::cin >> l;
                std::cout << "Postal Address: ";
                std::cin >> pa;
                std::cout << "Email Address: ";
                std::cin >> ea;
                std::cout << "Phone Number: ";
                std::cin >> pn;
                std::cout << "Birthday Date: ";
                std::cin >> bd;
                std::cout << "Favourite Meal: ";
                std::cin >> fm;
                std::cout << "Underwear Color: ";
                std::cin >> uc;
                std::cout << "Darkest Secret: ";
                std::cin >> ds;
                contacts[index].set(index, fn, ln, nn, l, pa, ea, pn, bd, fm, uc, ds);
                index++;
            }
        }
        else if (action.compare("SEARCH") == 0)
        {
            std::cout << "|INDEX     |FIRSTNAME |LASTNAME  |NICKNAME  |" << std::endl;
            for (int x = 0; x < index; x++)
            {
                contacts[x].getName();
            }
            std::cout << "Select an Index: ";
            std::cin >> selected;
            contacts[selected].get();
        }
    }
    return 0;
}