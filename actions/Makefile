NAME = push_swap.a

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

CC = gcc

AR = ar rcs

FUNCTION =	push_a.c\
			push_b.c\
			rotate.c\
			swap_a.c\
			swap_a_b.c\
			swap_b.c\
			reverse_rotate_a.c\
			reverse_rotate_a_b.c\
			reverse_rotate_b.c\
			rotate_reverse.c\

OBJECTS =	$(FUNCTION:.c=.o)

all : $(NAME)


$(NAME) :	$(OBJECTS)
			$(AR) $(NAME) $(OBJECTS)
	
clean :
			$(RM)	$(OBJECTS)
	
fclean : clean
			$(RM) $(NAME)
