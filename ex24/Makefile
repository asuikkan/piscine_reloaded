# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asuikkan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 10:08:45 by asuikkan          #+#    #+#              #
#    Updated: 2021/11/02 11:12:34 by asuikkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBNAME = libft.a
SOURCEDIR = srcs
INCLUDEDIR = includes

all: $(LIBNAME)

$(LIBNAME):
	gcc -Wall -Wextra -Werror -c $(SOURCEDIR)/*.c
	ar ru $@ *.o
	ranlib $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re
