#include "push_swap.h"

int    key_function( int *stack, int index)
{
    int key_number;
    int chunk = 25;
    int p = index * chunk;
    key_number = stack[p];
    // if (index * chunk == 75)
    //     return 0;
    return key_number;
}

int check_keynbr(int key_nbr,t_list *stack_a)
{
    t_list *str;
    str = stack_a;

    while (str)
    {
        if (str->content <= key_nbr)
            return 1;
        str = str ->next;
    }
    return 0; 
}
void    send_numbers_to_b(t_list **stack_a, t_list **stack_b ,int key_nbr)
{
    int i = 0;
    while (check_keynbr(key_nbr,*stack_a) != 0)
    {
        if ((*stack_a)->content <= key_nbr)
        {
            push_b(stack_a,stack_b);
        }
        rotate_a(stack_a);
        i++;
    }
}




int	main(int argc, char **argv)
{
    t_list	*stack_a = ft_stackfill(argc, argv);
    t_list	*stack_b = NULL;

    int size;
    int *arr;
    int a;
    int b;
    int c;

    arr = malloc(sizeof(int) * 101);
    size = ft_nodesize(stack_a);
    arr = selectionsort(convert_linkedlist(stack_a),size);
    a = key_function(arr, 1);
    send_numbers_to_b(&stack_a, &stack_b, a);
    b = key_function(arr, 2);
    send_numbers_to_b(&stack_a, &stack_b, b);
    c = key_function(arr, 3);
    send_numbers_to_b(&stack_a, &stack_b, c);

    least_moves_from_a(&stack_a, &stack_b);

    // sort_three(&stack_a);

    least_moves_from_b(&stack_a, &stack_b);
    
    // printf("a -> %d\n",a);
    // printf("b -> %d\n",b);
    // printf("c -> %d\n",c);

    // 	printf("------ B ------\n");
    // ft_display(stack_b);
    //     	printf("------ A ------\n");
    // ft_display(stack_a);
}