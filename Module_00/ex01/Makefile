# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctycho <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 16:10:10 by ctycho            #+#    #+#              #
#    Updated: 2021/05/21 16:10:14 by ctycho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	phonebook

#flags------------------------------------------------------------------------

CC		:=	clang++
FLAG	:=	-Wall -Wextra -Werror
RM		:=	rm -rf

#files------------------------------------------------------------------------

INC		:=	phonebook.hpp contacts.hpp
SRCS	:=	main.cpp contacts.cpp phonebook.cpp

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
