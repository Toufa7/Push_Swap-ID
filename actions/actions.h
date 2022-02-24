/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <otoufah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:03:15 by otoufah           #+#    #+#             */
/*   Updated: 2022/02/24 13:45:05 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTIONS_H
#define ACTIONS_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "/Users/otoufah/Desktop/PUSH_SWAP_ID/linkedlist_utils/linkedlist.h"
#include "/Users/otoufah/Desktop/PUSH_SWAP_ID/libft/libft.h"


void    swap_a(t_list   **stack_a);
void    swap_b(t_list   **stack_b);

void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);

void	rotate_a(t_list	**stack_a);
void	rotate_b(t_list	**stack_b);

void    rotate_reverse_a(t_list **stack_a);
void    rotate_reverse_b(t_list **stack_b);

#endif
