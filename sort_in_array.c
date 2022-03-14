#include "push_swap.h"

int    key_funchion( int *stack, int index)
{
    int key_number;
    int chunk = 25;
    int p = index * chunk;
    key_number = stack[p];
    // if (index * chunk == 75)
    //     return 0;
    return key_number;
}

int check_key_nuber(int key_nbr,t_list *stack_a)
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
    while (check_key_nuber(key_nbr,*stack_a) != 0)
    {
        if ((*stack_a)->content <= key_nbr)
        {
            push_b(stack_a,stack_b);
        }
        rotate_a(stack_a);
        i++;
    }
    printf("send num\n");
}


void    least_moves(t_list   **stack_a, t_list   **stack_b)
{
    printf("dssn\n");
    int size;
    int min;
    int idx;
    int n;

    size = ft_nodesize(*stack_a);
    printf("This is the size of Stack A %d\n", size);
    while (size > 3)
    {
		min  = find_min(*stack_a);
        idx = get_index(*stack_a,min);
		if (min == (*stack_a)->next->content)
		{
			swap_a(stack_a);
		}
        if (idx <= size / 2)
		{
			n = idx - 1;
			while (n-- > 0)
				rotate_a(stack_a);
		}
		else
		{  
			n = size - idx + 1;
			while (n-- > 0)
				rotate_reverse_a(stack_a);
		}
		push_b(stack_a, stack_b);
		size--;
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

    arr = malloc(sizeof(int) * 100);
    size = ft_nodesize(stack_a);
    arr = selectionsort(convert_linkedlist(stack_a),size);
    a = key_funchion(arr, 1);
    send_numbers_to_b(&stack_a, &stack_b, a);
    printf("This is the First Part %d\n",a);
    b = key_funchion(arr, 2);
    send_numbers_to_b(&stack_a, &stack_b, b);
    printf("This is the Second Part %d\n",b);
    c = key_funchion(arr, 3);
    send_numbers_to_b(&stack_a, &stack_b, c);
    printf("------- Left Numbers -------\n");
    ft_display(stack_b);
    printf("This is the Third Part %d\n",c);
    least_moves(&stack_a, &stack_b);
    printf("This is the Last Part\n");
    printf("------- B -------\n");
    ft_display(stack_b);
        printf("------- A -------\n");
    ft_display(stack_a);
}