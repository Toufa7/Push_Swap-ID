#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

// i'll check if the arguments to be given it's a digit

// and if there's duplicate numbers

// if i'll give it a INT_MAX our function must display an error

// if i'm not include any argument nothing to be showed

void    digit(int nbr)
{
    while (nbr)
    {
        if (!(nbr >= 48 && nbr <= 57 && nbr == 32))
            write(1,"Error",6);
        nbr++;
        exit(1);
    }
}

int	main(int argc, char **argv)
{
    int i = 1;
    while (i < argc)
    {
        digit(argv);
    }

}
