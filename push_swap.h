#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include "actions/actions.h"
#include "linkedlist_utils/linkedlist.h"

int	check_sorted(int n, char **av);
int	get_index(t_list *stack, int look);
int *convert_linkedlist(t_list *stack);
int *selectionsort(int arr[], int n);
void    least_moves_from_a(t_list   **stack_a, t_list   **stack_b);
void    least_moves_from_b(t_list   **stack_a, t_list   **stack_b);
int find_min(t_list *stack);
int find_max(t_list *stack);
void sort_three(t_list **stack_a);
void support_three(t_list **stack_a, int one, int two,int three);
#endif