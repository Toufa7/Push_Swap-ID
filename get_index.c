#include "push_swap.h"

int	get_index(t_list *stack, int look)
{
	int	i;

	i = 1;
	while (stack)
	{
		if (stack->content == look)
			return (i);
		stack = stack->next;
		i++;
	}
	return (0);
}