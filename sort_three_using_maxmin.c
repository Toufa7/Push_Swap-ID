#include "push_swap.h"

int     find_min(int n, char *arg[])
{
    int i = 1;
    int min;

    min = ft_atoi(arg[1]);
    while (i < n)
    {
        if (min > ft_atoi(arg[i]))
            min = ft_atoi(arg[i]); 
            i++;
    }
    return (min);
}

int     find_max(int n, char *arg[])
{
    int i = 1;
    int max;

    max = ft_atoi(arg[1]);
    while (i < n)
    {
        if (max < ft_atoi(arg[i]))
            max = ft_atoi(arg[i]); 
            i++;
    }
    return (max);
}

int	main(int argc,char *argv[])
{
    t_list  *stack_a;
    int     min;    
    int     max;
    
    stack_a = ft_stackfill(argc, argv);
    min = find_min(argc, argv);
    max = find_max(argc, argv);
    if (argc)
    {
        if (min == ft_atoi(argv[1]) && max == ft_atoi(argv[2]))
            {
                rotate_reverse_a(&stack_a);
                swap_a(&stack_a);
            }
        if (min == ft_atoi(argv[2]) && max == ft_atoi(argv[1]))
        {
            rotate_reverse_a(&stack_a);
            rotate_reverse_a(&stack_a);
        }
        if (min == ft_atoi(argv[3]) && max == ft_atoi(argv[1]))
        {
            swap_a(&stack_a);
            rotate_reverse_a(&stack_a);
        }
            if (min == ft_atoi(argv[3]) && max == ft_atoi(argv[2]))
            {
                rotate_reverse_a(&stack_a);
            }
        if (min == ft_atoi(argv[2]) && max == ft_atoi(argv[3]))
        {
            swap_a(&stack_a);
        }
    }
}