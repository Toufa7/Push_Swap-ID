#include "push_swap.h"

void    rotate_reverse_a(t_list **stack_a)
{
	t_list	*ses;
	t_list	*last;

    last = ft_lastlist(*stack_a);
	// if (ft_nodesize(*stack_a) < 2)
	// 	return ;
	ses = *stack_a;
    while (ses->next->next != NULL)
    {
        ses = ses->next;
    }
	ses->next= NULL;
	ft_addtofront(stack_a, last);
}