/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:46:36 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/22 15:37:51 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push_a(t_list **stack_a, t_list	**stack_b)
{
	t_list	*temp;

	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	ft_addtofront(stack_a, temp);
}
