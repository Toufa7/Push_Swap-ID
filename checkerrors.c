#include "push_swap.h"

// i'll check if the arguments to be given it's a digit

// and if there's duplicate numbers

// if i'll give it a INT_MAX our function must display an error

// if i'm not include any argument nothing to be showed

// void    check_digit(char *nbr)
// {
//     if (nbr >= 48 && nbr <= 57)
//         ft_putstr(nbr);
//     else
//         ft_putstr("Error");
// }

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


int main(int argc, char const *argv[])
{
    int i = 0;
    int a = 1;
    while (a < argc)
    {
        {
            if (ft_isdigit(ft_atoi(argv[i++])) == 1)
                ft_potstr(ft_atoi(argv[i++]));
            else
                ft_potstr("Error\n");
        }
        a++;
    }
}
