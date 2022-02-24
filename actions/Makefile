# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 15:03:05 by otoufah           #+#    #+#              #
#    Updated: 2022/02/23 17:01:25 by otoufah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = actions.a

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

CC = gcc

AR = ar rcs

FUNCTIONS =	swap_b.c\
			swap_a.c\
			swap_a_b.c\
			push_a.c\
			push_b.c\
			rotate_a.c\
			rotate_b.c\
			rotate_a_b.c\
			reverse_rotate_a.c\
			reverse_rotate_b.c\
			reverse_rotate_a_b.c\

OBJECTS =	$(FUNCTIONS:.c=.o)

$(NAME) :	$(OBJECTS)
			@$(AR) $(NAME) $(OBJECTS)
			@echo "ACTIONS CREATED"
			
all : $(NAME)
	
clean :
			@$(RM)	$(OBJECTS)
	
fclean : clean
			@$(RM) $(NAME)
			@echo "ACTIONS DESTROYED"
