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
	@$(AR) ./lib/$1 $(OBJS)
	@echo "$(shell tput bold)$(shell tput setaf 2)√$(shell tput sgr0)"
endef

define testing
	@echo "$(shell tput bold)$(shell tput setaf 2)Generating $1 $(shell tput sgr0)"
	@gcc $(CFLAGS) $(TEST_OBJS) $(OBJS) $(LIBS) -I$(INC)
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
TEST_SRCS	= $(wildcard test/*.c)
TEST_OBJS	= $(TEST_SRCS:.c=.o)

SRCS		= $(wildcard src/*.c)

OBJS		= $(SRCS:.c=.o)

INC		= includes

LIBS	=	./lib/libunit.a

NAME		= libunit.a
RM			= rm -f
CC			= gcc
AR			= ar -rcs
CFLAGS		= -Wall -Wextra 

%.o : %.c
			$(call compiling,$<,$(<:.c=.o),0)

${NAME}:	$(OBJS)
			$(call finishing,$(NAME))

all:		$(NAME)

clean:	
			$(call removing,$(OBJS))

fclean:		clean
			$(call removing,./lib/${NAME})


test: all $(TEST_OBJS)
			$(call testing,$(TEST))

tclean:	clean
			$(call removing,$(TEST_OBJS))

ftclean: fclean
			$(call removing,$(TEST_OBJS))
			$(call removing,./a.out)

re:	fclean all