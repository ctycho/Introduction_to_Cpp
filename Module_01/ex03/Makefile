# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctycho <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 18:30:48 by ctycho            #+#    #+#              #
#    Updated: 2021/05/26 18:30:51 by ctycho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	zombie

#flags------------------------------------------------------------------------

CC		:=	clang++
FLAG	:=	-Wall -Wextra -Werror
RM		:=	rm -rf

#files------------------------------------------------------------------------

INC		:=	Zombie.hpp ZombieHorde.hpp
SRCS	:=	main.cpp Zombie.cpp ZombieHorde.cpp

#colors----------------------------------------------------------------------

CYAN	:=	\033[0;36m
LGREEN	:=	\033[1;32m
LBLUE	:=	\033[1;34m

#rules------------------------------------------------------------------------

all:		$(NAME)

${NAME}: $(SRCS) $(INC)
	@$(CC) -o $(NAME) $(SRCS) $(FALG)
	@echo "${CYAN}Library "${NAME}" succesfully compiled"

fclean:
	@rm -f ${NAME}
	@echo "${LGREEN}Everything is cleaned succesfully"

re:			fclean all
	@echo "${LBLUE}Library successfuly rebuilt"
