#include "actions.h"

void    reverse_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
    rotate_reverse_a(stack_a);
    rotate_reverse_b(stack_b);
}