#include    "push_swap.h"
void	check_exist(char **av)
{
	int	i;

	i = 0;
	if (!av[i])
	{
		ft_putstr_fd("Error: fill stack A with Integers!", 2);
		exit(1);
	}
}

int	check_sorted(int n, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < n)
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strcmp(av[i],av[j]) >= 0) // in this they are not sorted
			{
                return (0);
			}
			j++;
		}
		i++;
	}
    return (1);
}

int	get_index(t_list *stack, int look)
{
	int	i;

	i = 1;
	while (stack)
	{
		if (stack->content == look)
			return (i);
		stack = stack->next;
		i++;
	}
	return (0);
}

int find_min(t_list *stack)
{
	int	min;

	min = stack->content;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}

int find_max(t_list *stack)
{
	int	max;

	max = stack->content;
	while (stack)
	{
		if (stack->content > max)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}

void    push_small_numbers(t_list   **stack_a, t_list   **stack_b)
{
    int size;
    int min;
    int idx;
    int n;

    size = ft_nodesize(*stack_a);
    while (size > 3)
    {
		// printf("This is min %d\n",min);
		// printf("This is size %d\n",size);
		// printf("This is idx %d\n",idx);
		min  = find_min(*stack_a);
        idx = get_index(*stack_a,min);
		if ( min == (*stack_a)->next->content)
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

void support_three(t_list **stack_a, int one, int two,int three)
{
	if (find_min(*stack_a) == one && find_max(*stack_a) == two)
	{
		rotate_reverse_a(stack_a);
		swap_a(stack_a);
	}
	if (find_min(*stack_a) == two && find_max(*stack_a) == one)
	{
		rotate_reverse_a(stack_a);
		rotate_reverse_a(stack_a);
	}
	if (find_min(*stack_a) == three && find_max(*stack_a) == one)
	{
		swap_a(stack_a);
		rotate_reverse_a(stack_a);
	}
	if (find_min(*stack_a) == three && find_max(*stack_a) == two)
	{
		rotate_reverse_a(stack_a);
	}
	if (find_min(*stack_a) == two && find_max(*stack_a) == three)
	{
		swap_a(stack_a);
	}
}

void sort_three(t_list **stack_a)
{
	int	one;
	int two;
	int three;

	one = (*stack_a)->content;
	two = (*stack_a)->next->content;
	three = (*stack_a)->next->next->content;
	if (ft_nodesize(*stack_a))
	{
		support_three(stack_a, one, two, three);
    }
}



int	main(int arc, char *argv[])
{
    t_list	*stack_a = ft_stackfill(arc, argv);
    t_list  *stack_b = NULL;

	check_exist(argv);

    if (check_sorted(arc,argv) == 1)
        exit(1);

    push_small_numbers(&stack_a, &stack_b);
    sort_three(&stack_a);
    while(stack_b)
        push_a(&stack_a, &stack_b);
	// printf("------ A ------\n");
    // ft_display(stack_a);
    // printf("------ B ------\n");
    // ft_display(stack_b);
}