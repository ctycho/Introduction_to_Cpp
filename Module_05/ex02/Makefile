# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctycho <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 16:10:10 by ctycho            #+#    #+#              #
#    Updated: 2021/06/06 18:10:27 by ctycho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	output

#flags------------------------------------------------------------------------

CC		:=	clang++
FLAG	:=	-Wall -Wextra -Werror -std=c++98 -pedantic
RM		:=	rm -rf

#files------------------------------------------------------------------------

INC		:=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp
SRCS	:=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
 			RobotomyRequestForm.cpp PresidentialPardonForm.cpp

#colors----------------------------------------------------------------------

CYAN	:=	\033[0;36m
LGREEN	:=	\033[1;32m
LBLUE	:=	\033[1;34m

#rules------------------------------------------------------------------------

all:		$(NAME)

${NAME}: $(SRCS) $(INC)
	@$(CC) -o $(NAME) $(SRCS) $(FLAG)
	@echo "${CYAN}Library "${NAME}" succesfully compiled"

fclean:
	@rm -f ${NAME}
	@echo "${LGREEN}Everything is cleaned succesfully"

re:			fclean all
	@echo "${LBLUE}Library successfuly rebuilt"
