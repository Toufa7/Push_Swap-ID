#include "push_swap.h"

t_list  *ft_stackfill(int nbr, char *arg[])
{
    int i;
    t_list *stack_a;

    i = 2;
	stack_a = ft_newnode(ft_atoi(arg[1]), 0);
    while (i < nbr)
    {
        ft_addtoback(&stack_a, ft_newnode(ft_atoi(arg[i]), i - 1));
        i++;
    }
    return (stack_a);
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	while (av[a])
	{
		b = a + 1;
		while (av[b])
		{
			if (ft_strcmp(av[a], av[b]) >= 0)
			{
				temp = av[a];
				av[a] = av[b];
				av[b] = temp;
			}
			b++;
		}
		a++;
	}
	a = 0;
	while (a++ < ac - 1)
		printf("%d -- |%s|\n",a,av[a]);
}
