#ifndef ACTIONS_H
#define ACTIONS_H

#include "../ft_printf/ft_printf.h"
#include "../libft/libft.h"
#include "../linkedlist_utils/linkedlist.h"

void    swap_a(t_list   **stack_a);
void    swap_b(t_list   **stack_b);

void    push_a(t_list **stack_a, t_list **stack_b);
void    push_b(t_list **stack_a, t_list **stack_b);

void    rotate_a(t_list **stack_a);
void    rotate_b(t_list **stack_b);

void    rotate_reverse_a(t_list **stack_a);
void    rotate_reverse_b(t_list **stack_b);

#endif