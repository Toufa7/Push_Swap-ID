#include "/Users/otoufah/Desktop/PUSH_SWAP_ID/actions/actions.h"
#include "/Users/otoufah/Desktop/PUSH_SWAP_ID/libft/libft.h"
#include "colors.c"


int	main(int argc, char **argv)
{

	t_list *stack_a = ft_newnode(ft_atoi(argv[1]));
	t_list *stack_b;
    
	stack_b = NULL; // Here the stack_b is empty
    
    printf("------- THEN ------\n");

    int i = 2;
    while (i < argc)
    {
        ft_addtoback(&stack_a, ft_newnode(ft_atoi(argv[i])));
        i++;
    }
    ft_display(stack_a);


    printf("------- NOW ------\n");

	if (argv[1])
	{
		if (ft_strcmp(argv[1],argv[2]) < 0 && ft_strcmp(argv[2],argv[3]) > 0)
		{
			rotate_reverse_a(&stack_a);
			if (ft_strcmp(argv[3],argv[1]) > 0)
			{
				swap_a(&stack_a);
			}
		}
		if (ft_strcmp(argv[1],argv[2]) > 0 && ft_strcmp(argv[1],argv[3]) > 0)
		{
			rotate_a(&stack_a);
		}
		if (ft_strcmp(argv[1],argv[2]) > 0)
		{
			swap_a(&stack_a);
		}
	}
    ft_display(stack_a);
}
