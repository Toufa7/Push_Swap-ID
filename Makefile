NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

CC = gcc

AR = ar rcs

FUNCTION =	linkedlist_utils/ft_newnode.c\
			linkedlist_utils/ft_nodesize.c\
			linkedlist_utils/ft_lastlist.c\
			linkedlist_utils/ft_display.c\
			linkedlist_utils/ft_addtofront.c\
			linkedlist_utils/ft_addtoback.c\
			linkedlist_utils/ft_stackfill.c\
			actions/swap_b.c\
            actions/swap_a.c\
            actions/swap_a_b.c\
            actions/push_a.c\
            actions/push_b.c\
            actions/rotate_a.c\
            actions/rotate_b.c\
            actions/rotate_a_b.c\
            actions/reverse_rotate_a.c\
            actions/reverse_rotate_a.c\
            actions/reverse_rotate_a_b.c\

OBJECTS =	$(FUNCTION:.c=.o)

all : $(NAME)

$(NAME) :	$(OBJECTS)
			$(AR) $(NAME) $(OBJECTS)
			@echo "LINKEDLIST CREATED"

clean :
			$(RM)	$(OBJECTS)
	
fclean : clean
			$(RM) $(NAME)
			@echo "LINKEDLIST DESTROYED"
