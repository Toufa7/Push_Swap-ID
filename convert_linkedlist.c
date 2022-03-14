#include "push_swap.h"

int *convert_linkedlist(t_list *stack)
{
    int i = 0;
    int len;
    int *arr;

    len = ft_nodesize(stack);
    arr = malloc(sizeof(int) * len);
    while (i < len)
    {
        arr[i] = stack->content;
        stack = stack->next;
        i++;
    }
    return (arr);
}