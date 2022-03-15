#include "push_swap.h"

void    least_moves_from_b(t_list   **stack_a, t_list   **stack_b)
{
    int size;
    int max;
    int idx;
    int n;


    size = ft_nodesize(*stack_b);
    while (size > 3)
    {
		max = find_max(*stack_b);
        idx = get_index(*stack_b,max);
        if (idx <= size / 2 && idx != 0)
		{
			n = idx - 1;
			while (n-- > 0)
				rotate_b(stack_b);
		}
		else if (idx != 0)
		{  
			n = size - idx + 1;
			while (n-- > 0)
				rotate_reverse_b(stack_b);
		}
		push_a(stack_a, stack_b);
		size--;
	}
	push_a(stack_a, stack_b);
}