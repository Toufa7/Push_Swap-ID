/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:34:11 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/06 17:04:48 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			if (ft_strcmp(av[i], av[j]) >= 0)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
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

void push_small_numbers(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	min;

	size = ft_nodesize(*stack_a);
	min = find_min(*stack_a);
    while (size >= 3)
	{
		if (min == (*stack_a)->content)
		{
			push_b(stack_a, stack_b);
			min = find_min(*stack_a);
			size--;
		}
		else
			rotate_reverse_a(stack_a);
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

int main(int argc, char *argv[])
{
    t_list	*stack_a = ft_stackfill(argc, argv);
    t_list  *stack_b = NULL;

    if (check_sorted(argc,argv) == 1)
        exit(1);

    push_small_numbers(&stack_a, &stack_b);
    sort_three(&stack_a);
    while(stack_b)
        push_a(&stack_a, &stack_b);
	printf("------ A ------\n");
    ft_display(stack_a);
}
