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

CC =		gcc
NAME	=	tests

MAIN	=	../../$(NAME).c
SRCS =	$(wildcard ./*.c)

INC 			=	includes
LIB				=	../lib/libunit.a
RM 				=	rm -rf
OBJ				=	$(SRCS:.c=.o)
MAIN_OBJ	=	$(MAIN:.c=.o)
CFLAG 		=	-Wall -Wextra -Werror

all :	$(NAME)

%.o : %.c
			$(CC) $(CFLAG) -I $(INC) -c $< -o $@

$(NAME) :	$(OBJ) $(MAIN_OBJ)
			@make -C ../
			$(CC) $(OBJ) $(MAIN_OBJ) $(LIB) -o ../../tester

clean :
			$(RM) $(OBJ) ../ ../../tests.o
			@make clean -C

fclean :	clean
			$(RM) $(NAME) ../../tester
			@make fclean -C ../

test	:	all
			@echo "\nGOGOGO!\n\n"
			@../../tester

re : 		fclean all

.PHONY : 	all clean fclean re