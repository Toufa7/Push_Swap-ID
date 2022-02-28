/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:38:55 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/28 10:12:17 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
// Creat a node
// give it the head of the list
// Now since the head is empty so store in it the next content
// Finaly assign the newnode to point to NULL

// In this case the code to swap two top elements
// is the same as for swapping two elements in an array: 
//     T temp = stack[topIndex];
//     stack[topIndex] = stack[topIndex - 1];
//     stack[topIndex - 1] = temp;

void	swap_a(t_list	**stack_a)
{
	t_list	*temp;

	// if (ft_nodesize(*stack_a) > 1)
	// {
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = (*stack_a)->next;
		(*stack_a)->next = temp;
		printf("sa\n");
	// }	
}

/* Swap the first 2 elements at the top of stack a do nothing if there is only one or no elements */