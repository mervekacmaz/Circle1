// Checks for a digit (0 throguh 9)

#include "libft.h"

int	ft_isdigit(int numb)
{
	if (numb >= '0' && numb <= '9')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int main()
{
	int c;
	c = '6';
	printf("%d", ft_isdigit(c));
}
*/
