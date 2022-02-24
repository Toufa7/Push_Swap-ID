#include "actions.h"

void	rotate_b(t_list	**stack_b)
{
	t_list	*temp;

	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_addtoback(stack_b, temp);
}

/* Shift up all elements of stack b by 1. The first element becomes the last one */
