/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:46:25 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/22 15:38:33 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push_b(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*temp;

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	ft_addtofront(stack_b, temp);
}

/*
Take the first element at the top of a and put it at the top of b.
*/
