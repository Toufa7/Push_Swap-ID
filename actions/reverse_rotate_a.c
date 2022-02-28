#include "actions.h"

void    rotate_reverse_a(t_list **stack_a)
{
	t_list	*prelast;
	t_list	*last;

    last = ft_lastlist(*stack_a);
	// if (ft_nodesize(*stack_a) < 2)
	// 	return ;
	prelast = *stack_a;
    while (prelast->next->next != NULL)
    {
        prelast = prelast->next;
    }
	prelast->next= NULL;
	ft_addtofront(stack_a, last);
	ft_putstr("rra\n");
}

/* Shift down all elements of stack a by 1. The last element becomes the first one */