#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "/Users/otoufah/Desktop/PUSH_SWAP_ID/libft/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main()
{
    printf("%d\n",ft_strcmp("5","2"));
}