/*
Calculate the lenght of the string.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	int cmp = ft_strlen("abcdefght");
// 	printf("%d", cmp);
// }