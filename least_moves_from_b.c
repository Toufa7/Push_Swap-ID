#include "push_swap.h"

void    least_moves_from_b(t_list   **stack_a, t_list   **stack_b)
{
    int size;
    int min;
    int idx;
    int n;

    size = ft_nodesize(*stack_a);
    // printf("This is the size of Stack A %d\n", size);
    while (size > 3)
    {
		min  = find_max(*stack_b);
        idx = get_index(*stack_b,min);
		if (min == (*stack_b)->next->content)
		{
			swap_a(stack_a);
		}
        if (idx <= size / 2)
		{
			n = idx - 1;
			while (n-- > 0)
				rotate_b(stack_b);
		}
		else
		{  
			n = size - idx + 1;
			while (n-- > 0)
				rotate_reverse_b(stack_b);
		}
		push_a(stack_a, stack_b);
		size--;
	}
}