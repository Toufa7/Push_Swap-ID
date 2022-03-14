#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define  say(x);   printf(x);

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include "actions/actions.h"
#include "linkedlist_utils/linkedlist.h"

int	check_sorted(int n, char **av);
int	get_index(t_list *stack, int look);

#endif