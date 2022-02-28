/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:46:25 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/25 11:40:32 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	push_b(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*temp; // creating a temporary node

	temp = *stack_a;	// the temporary node point to the head of the stack_a
	*stack_a = (*stack_a)->next;	// the head now point to the next node 
	temp->next = NULL; 
	ft_addtofront(stack_b, temp);
	ft_putstr("pb\n");
}

/*
Take the first element at the top of a and put it at the top of b.
*/
