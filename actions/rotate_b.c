#include "push_swap.h"

void	rotate_b(t_list **stack_b)
{
	t_list	*temp;

	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_addtofront(stack_b, temp);
}