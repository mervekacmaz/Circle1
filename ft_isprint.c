//checks for any printable char including space

#include "libft.h"

int	ft_isprint(int printable)
{
	if (printable >= 32 && printable <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main()
{
	int c;
	c = '3';
	printf("%d", ft_isprint(c));
}
*/
