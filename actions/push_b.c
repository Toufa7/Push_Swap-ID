#include "push_swap.h"

void    push_b(t_list   **stack_b)
{
    t_list  *temp;
    temp = *stack_b;

    *stack_b = (*stack_b)->next;
    temp->next = NULL;
    ft_addtofront(stack_b,temp);
}

/*
Take the first element at the top of a and put it at the top of b.
*/
