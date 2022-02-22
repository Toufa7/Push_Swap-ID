#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "/Users/otoufah/Desktop/push_swap/linkedlist_utils/linkedlist.h"
#include "/Users/otoufah/Desktop/push_swap/libft/libft.h"


void    swap_a(t_list   **stack_a);
void    swap_b(t_list   **stack_b);

void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);

void	rotate_a(t_list	**stack_a);

void    rotate_reverse_a(t_list **stack_a);

#endif