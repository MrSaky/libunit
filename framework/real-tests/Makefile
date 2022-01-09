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

INC 			=	$(wildcard ./*.h)
LIB				=	../lib/libunit.a
RM 				=	rm -rf
OBJ				=	$(SRCS:.c=.o)
MAIN_OBJ	=	$(MAIN:.c=.o)
CFLAG 		=	-Wall -Wextra -Werror

all :	$(NAME)
			@make -C ../

%.o : %.c
			$(CC) $(CFLAG) -I $(INC) -c $<

$(NAME) :	$(OBJ) $(MAIN_OBJ)
			$(CC) $(OBJ) $(MAIN_OBJ) $(LIB) -o ../../$(NAME)

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re : 		fclean all

.PHONY : 	all clean fclean re