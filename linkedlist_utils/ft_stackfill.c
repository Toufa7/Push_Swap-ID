#include "linkedlist.h"

t_list  *ft_stackfill(int nbr, char *arg[])
{
    t_list *stack_a = ft_newnode(ft_atoi(arg[1]));

    int i = 2;
    while (i < nbr)
    {
        ft_addtoback(&stack_a, ft_newnode(ft_atoi(arg[i])));
        i++;
    }
    return (stack_a);
}