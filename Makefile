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

define compiling
	@echo "$(shell tput bold)$(shell tput setaf 3)Compiling $1 $(shell tput sgr0)"
	@$(CC) $(CFLAGS) -I$(INC) -c $1 -o $2
	@echo "$(shell tput bold)$(shell tput setaf 2)√$(shell tput sgr0)"
endef

define finishing
	@echo "$(shell tput bold)$(shell tput setaf 2)Compiling $1 $(shell tput sgr0)"
	@$(AR) $(OBJS) -I$(INC) -o $(NAME)
	@echo "$(shell tput bold)$(shell tput setaf 2)√$(shell tput sgr0)"
endef

define testing
	@echo "$(shell tput bold)$(shell tput setaf 2)Testing $1 $(shell tput sgr0)"
	@gcc $(CFLAGS) $(OBJS) $(LIBS) -I$(INC) -o $1
	@echo "$(shell tput bold)$(shell tput setaf 2)√$(shell tput sgr0)"
endef

define cleaning
	@echo "$(shell tput bold)$(shell tput setaf 8)Cleaning $1 $(shell tput sgr0)"
	@make $2 -sC $1 > /dev/null
	@echo "$(shell tput bold)$(shell tput setaf 2)√$(shell tput sgr0)"
endef

define removing
	@echo "$(shell tput bold)$(shell tput setaf 8)Removing $1 $(shell tput sgr0)"
	@$(RM) $1 > /dev/null
	@echo "$(shell tput bold)$(shell tput setaf 2)√$(shell tput sgr0)"
endef

TEST	= test

SRCS		= $(wildcard src/*.c)

OBJS		= $(SRCS:.c=.o)

INC		= ./includes

LIBS	=	./lib/libunit.a

NAME		= libunit.a
RM			= rm -f
CC			= gcc
AR			= ar -rcs
CFLAGS		= -Wall -Wextra -Werror

%.o : %.c
			$(call compiling,$<,$(<:.c=.o),0)

${NAME}:	$(OBJS)
			$(call finishing,$(NAME))

all:		$(NAME)

clean:	
			$(call removing,$(OBJS))

fclean:		clean
			$(call removing,${NAME})


test: $(OBJS) $(NAME)
			$(call testing,$(TEST))

re:	fclean all