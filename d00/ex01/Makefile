# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: janhoon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 12:53:43 by janhoon           #+#    #+#              #
#    Updated: 2017/05/22 12:53:45 by janhoon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

phonebook:
	clang++ -Wall -Wextra -Werror -c main.cpp Contacts.class.hpp -I ./	
	clang++ -Wall -Wextra -Werror -o phonebook main.o -I ./

clean:
	rm Contacts.class.hpp.gch main.o

fclean: 
	rm phonebook Contacts.class.hpp.gch main.o

re:
	make fclean 
	make phonebook