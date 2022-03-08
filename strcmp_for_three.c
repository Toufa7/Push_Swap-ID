/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_for_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:04:11 by otoufah           #+#    #+#             */
/*   Updated: 2022/03/06 15:16:16 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ind_min(int n, char *arg[])
{
	int	i;
	int	min;

	i = 1;
	min = ft_atoi(arg[1]);
	while (i < n)
	{
		if (min > ft_atoi(arg[i]))
		min = ft_atoi(arg[i]);
		i++;
	}
	return (min);
}

void	sort_three(char	*arg[], int nbr)
{
	t_list	*stack_a;

	stack_a = ft_stackfill(nbr, arg);
	if (nbr == 4)
	{
		if (ft_strcmp(arg[1], arg[2]) < 0 && ft_strcmp(arg[2], arg[3]) > 0)
		{
			rotate_reverse_a(&stack_a);
			if (ft_strcmp(arg[3], arg[1]) > 0)
				swap_a(&stack_a);
		}
		if (ft_strcmp(arg[1], arg[2]) > 0 && ft_strcmp(arg[1], arg[3]) > 0)
		{
			rotate_a(&stack_a);
			if (ft_strcmp(arg[2], arg[3]) < 0)
				swap_a(&stack_a);
		}
		if (ft_strcmp(arg[1], arg[2]) > 0)
		{
			swap_a(&stack_a);
		}
	}
	ft_display(stack_a);
}

int	main(int argc, char *argv[])
{
	sort_three(argv, argc);
}
