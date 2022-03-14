#include    "push_swap.h"



int	main(int arc, char *argv[])
{
    t_list	*stack_a = ft_stackfill(arc, argv);
    t_list  *stack_b = NULL;

    if (check_sorted(arc,argv) == 1)
        exit(1);
    least_moves(&stack_a, &stack_b);
    sort_three(&stack_a);
    while(stack_b)
        push_a(&stack_a, &stack_b);
	printf("------ A ------\n");
    ft_display(stack_a);
    // printf("------ B ------\n");
    // ft_display(stack_b);
}