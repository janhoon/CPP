/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janhoon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 12:27:16 by janhoon           #+#    #+#             */
/*   Updated: 2017/05/22 12:27:20 by janhoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_HPP
#define CONTACTS_CLASS_HPP

#include <iostream>
#include <string>

class Contacts
{
  public:
    Contacts(void);
    ~Contacts(void);
    void set(int customers, std::string fn, std::string ln,
             std::string nn, std::string l, std::string pa,
             std::string ea, std::string pn, std::string bd, std::string fm,
             std::string uc, std::string ds);
    void getName(void);
    void get(void);

  private:
    int _id;
    std::string _fn;
    std::string _ln;
    std::string _nn;
    std::string _l;
    std::string _pa;
    std::string _ea;
    std::string _pn;
    std::string _bd;
    std::string _fm;
    std::string _uc;
    std::string _ds;
};

#endif