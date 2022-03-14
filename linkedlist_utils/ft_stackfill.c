#include "linkedlist.h"
#include <limits.h>

void	check_doubles_ranges(char **arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(arr[i]) == ft_atoi(arr[j]))
			{
				ft_printf("Duplicate");
				exit(1);
			}
			j++;
		}
		if (ft_atoi(arr[i]) > INT_MAX || ft_atoi(arr[i]) < INT_MIN)
		{
			printf("Range akhaay");
			exit(1);
		}
		i++;
	}
}

// int	check_exist(char **av)
// {
// 	int	i;

// 	i = 0;
// 	if (!av[i])
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

t_list  *ft_stackfill(int nbr, char *arg[])
{
    int i;
    t_list *stack_a;

    i = 2;
	stack_a = ft_newnode(ft_atoi(arg[1]), 0);
    while (i < nbr)
    {
        ft_addtoback(&stack_a, ft_newnode(ft_atoi(arg[i]), i - 1));
        // check_doubles_ranges(arg,nbr);
        i++;
    }
    return (stack_a);
}
