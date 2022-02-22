#include "push_swap.h"

void	rotate_a(t_list	**stack_a)
{
	t_list	*ses;

	if (ft_nodesize(*stack_a) < 2)
		return ;

	ses = *stack_a;
	*stack_a = (*stack_a)->next;
	ses->next= NULL;
	ft_addtoback(stack_a,ses);
}
