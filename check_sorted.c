#include "push_swap.h"

int	check_sorted(int n, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < n)
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strcmp(av[i],av[j]) >= 0)
			{
                return (0);
			}
			j++;
		}
		i++;
	}
    return (1);
}