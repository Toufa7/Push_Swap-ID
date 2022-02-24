#include "actions.h"

void    rotate_reverse_b(t_list **stack_b)
{
	t_list	*prelast;
	t_list	*last;

    last = ft_lastlist(*stack_b);
	// if (ft_nodesize(*stack_b) < 2)
	// 	return ;
	prelast = *stack_b;
    while (prelast->next->next != NULL)
    {
        prelast = prelast->next;
    }
	prelast->next= NULL;
	ft_addtofront(stack_b, last);
}

/* Shift down all elements of stack b by 1. The last element becomes the first one */
