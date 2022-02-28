NAME = linkedlist.a

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

CC = gcc

AR = ar rcs

FUNCTION =	ft_newnode.c\
			ft_nodesize.c\
			ft_lastlist.c\
			ft_display.c\
			ft_addtofront.c\
			ft_addtoback.c\


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
