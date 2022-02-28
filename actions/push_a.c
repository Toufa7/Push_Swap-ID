/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:46:36 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/25 11:35:27 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	push_a(t_list **stack_a, t_list	**stack_b)
{
	t_list	*temp;

	temp = *stack_b; // Store head node
	*stack_b = (*stack_b)->next; // now the head point to the next element 
	temp->next = NULL; // The temp node that we creat point to NULL
	ft_addtofront(stack_a, temp); // with the help of ft_addfront we send the new node (temp) to the stack_a
	ft_putstr("pa\n");

}

/*
Take the first element at the top of b and put it at the top of a.
*/