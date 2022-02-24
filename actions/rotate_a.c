#include "actions.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_addtoback(stack_a, temp);
}

/* Shift up all elements of stack a by 1. The first element becomes the last one */
