#include "push_swap.h"

void support_three(t_list **stack_a, int one, int two,int three)
{
	if (find_min(*stack_a) == one && find_max(*stack_a) == two)
	{
		rotate_reverse_a(stack_a);
		swap_a(stack_a);
	}
	if (find_min(*stack_a) == two && find_max(*stack_a) == one)
	{
		rotate_reverse_a(stack_a);
		rotate_reverse_a(stack_a);
	}
	if (find_min(*stack_a) == three && find_max(*stack_a) == one)
	{
		swap_a(stack_a);
		rotate_reverse_a(stack_a);
	}
	if (find_min(*stack_a) == three && find_max(*stack_a) == two)
	{
		rotate_reverse_a(stack_a);
	}
	if (find_min(*stack_a) == two && find_max(*stack_a) == three)
	{
		swap_a(stack_a);
	}
}

void sort_three(t_list **stack_a)
{
	int	one;
	int two;
	int three;

	one = (*stack_a)->content;
	two = (*stack_a)->next->content;
	three = (*stack_a)->next->next->content;
	if (ft_nodesize(*stack_a))
	{
		support_three(stack_a, one, two, three);
    }
}