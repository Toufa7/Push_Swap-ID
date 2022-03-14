#include    "push_swap.h"

void    push_small_numbers(t_list   **stack_a, t_list   **stack_b)
{
    int size;
    int min;
    int idx;
    int n;

    size = ft_nodesize(*stack_a);
    while (size > 3)
    {
		min  = find_min(*stack_a);
        idx = get_index(*stack_a,min);
        if (idx <= size / 2)
		{
			n = idx - 1;
			while (n-- > 0)
				rotate_a(stack_a);
		}
		else
		{  
			n = size - idx + 1;
			while (n-- > 0)
				rotate_reverse_a(stack_a);
		}
		push_b(stack_a, stack_b);
		size--;
	}
}

int	main(int arc, char *argv[])
{
    t_list	*stack_a = ft_stackfill(arc, argv);
    t_list  *stack_b = NULL;

    if (check_sorted(arc,argv) == 1)
        exit(1);
    push_small_numbers(&stack_a, &stack_b);
    sort_three(&stack_a);
    while(stack_b)
        push_a(&stack_a, &stack_b);
	printf("------ B ------\n");
    ft_display(stack_b);

}