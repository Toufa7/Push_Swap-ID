#include "push_swap.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_addtofront(stack_a, temp);
}
