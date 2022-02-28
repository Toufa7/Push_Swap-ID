#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int    ft_atoi(const char *str)
{
    int    i;
    int    rslt;
    int    sign;

    i = 0;
    rslt = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
        sign = -sign ;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        rslt = (rslt * 10) + (str[i] - '0');
        i++;
    }
    return (rslt * sign);
}


int    main(int argc, char **argv)
{
    int i = 1;
    int min;

    min = ft_atoi(argv[1]);
    while (i < argc)
    {
        if (min > ft_atoi(argv[i]))
            min = ft_atoi(argv[i]); 
            i++;
    }
    return (min);
}