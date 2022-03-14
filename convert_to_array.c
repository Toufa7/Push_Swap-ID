#include "push_swap.h"

int convert_to_array(t_list **stack)
{
    int i = 1;
    int len;
    char *arr;

    len = ft_nodesize(*stack);
    arr = malloc(sizeof(int) * len);
    while (arr[i])
    {
        arr[i] = (*stack)->content;
        (*stack) = (*stack)->next;
        i++;
    }
    return (0);
}