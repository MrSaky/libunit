# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 21:24:18 by shocquen          #+#    #+#              #
#    Updated: 2022/01/08 21:24:19 by shocquen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


define finishing
	@echo "$(shell tput bold)$(shell tput setaf 3)Compiling $1 $(shell tput sgr0)"
	@$(CC) $(OBJ) $(LIB) -o $1
	@echo "$(shell tput bold)$(shell tput setaf 2)√$(shell tput sgr0)"
endef

CC =		gcc
NAME	=	tester

SRCS =	$(wildcard ./*.c)

INC 			=	includes
LIB				=	../framework/lib/libunit.a
RM 				=	rm -rf
OBJ				=	$(SRCS:.c=.o)
CFLAG 		=	-Wall -Wextra -Werror

all :	$(NAME)

%.o : %.c
			@$(CC) $(CFLAG) -I $(INC) -c $< -o $@

$(NAME) :	$(OBJ)
			@make -C ../framework
			$(call finishing,tester)

clean :
			$(RM) $(OBJ)
			@make clean -C ../framework

fclean :	clean
			$(RM) $(NAME) tester
			@make fclean -C ../framework

test	:	all
			@echo "\nRUN THE TESTS!\n\n"
			@./tester

re : 		fclean all

.PHONY : 	all clean fclean re