#include "/Users/otoufah/Desktop/PUSH_SWAP_ID/actions/actions.h"
#include "/Users/otoufah/Desktop/PUSH_SWAP_ID/libft/libft.h"
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
        ft_addtofront(&stack_a, ft_newnode(ft_atoi(argv[i])));
        i++;
    }
    
    red();
    printf("------ STACK A ------\n");
    reset();
    ft_display(stack_a);
    printf("------ STACK B ------\n");
    push_b(&stack_a,&stack_b);
    reset();
    ft_display(stack_b);
    red();
    printf("------ STACK A NOW ------\n");
    reset();
    ft_display(stack_a);
    yellow();
    return 0;
}
