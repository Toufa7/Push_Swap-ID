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
			libft/ft_isalpha.c\
			libft/ft_isdigit.c\
			libft/ft_isalnum.c\
			libft/ft_isascii.c\
			libft/ft_isprint.c\
			libft/ft_strlen.c\
			libft/ft_memset.c\
			libft/ft_bzero.c\
			libft/ft_memcpy.c\
			libft/ft_memmove.c\
			libft/ft_strlcpy.c\
			libft/ft_strlcat.c\
			libft/ft_toupper.c\
			libft/ft_tolower.c\
			libft/ft_strchr.c\
			libft/ft_strrchr.c\
			libft/ft_strncmp.c\
			libft/ft_strcmp.c\
			libft/ft_memchr.c\
			libft/ft_memcmp.c\
			libft/ft_strnstr.c\
			libft/ft_atoi.c\
			libft/ft_calloc.c\
			libft/ft_strdup.c\
			libft/ft_substr.c\
			libft/ft_strjoin.c\
			libft/ft_strtrim.c\
			libft/ft_itoa.c\
			libft/ft_strmapi.c\
			libft/ft_split.c\
			libft/ft_putchar_fd.c\
			libft/ft_putstr_fd.c\
			libft/ft_putendl_fd.c\
			libft/ft_putnbr_fd.c\
			libft/ft_striteri.c\
			ft_printf/ft_printf.c\
			ft_printf/ft_putchar.c\
			ft_printf/ft_putstr.c\
			ft_printf/ft_putnbr.c\
			ft_printf/ft_intlen.c\
			ft_printf/ft_putunnbr.c\
			ft_printf/ft_unlen.c\
			ft_printf/ft_putaddup.c\
			ft_printf/ft_putaddlow.c\
			ft_printf/ft_hexlen.c\
			check_sorted.c\
			get_index.c\
			convert_linkedlist.c\
			selecting_sort.c\
			least_moves.c\
			find_max_min.c\
	
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
