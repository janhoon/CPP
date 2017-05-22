/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janhoon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 10:29:28 by janhoon           #+#    #+#             */
/*   Updated: 2017/05/22 10:29:31 by janhoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		char current;
		for (int c = 2; c <= argc; c++)
		{
			for (size_t i = 0; i <= std::strlen(argv[c - 1]); i++)
			{
				current = std::toupper(argv[c - 1][i]);
				std::cout << current;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}