#include "/Users/otoufah/Desktop/push_swap/actions/push_swap.h"
#include "/Users/otoufah/Desktop/push_swap/libft/libft.h"
#include "colors.c"


int	main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;

	stack_a = ft_newnode(ft_atoi(argv[1]));
	stack_b = NULL;


    int i = 2;
    while (i < argc)
    {
        ft_addtoback(&stack_a, ft_newnode(ft_atoi(argv[i])));
        i++;
    }
    
    // swap_a(&stack_a);
    red();
    printf("------ stack a ------\n");
    reset();
    ft_display(stack_a);
    return 0;
}
