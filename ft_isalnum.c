//checks for an alphanumeric number

#include "libft.h"

int	ft_isalnum(int c)
{
	if((ft_isdigit(c)) || (ft_isalpha(c)));
		return (1);

	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	int c;
	c = "r";
	printf("%d", ft_isalnum(c)); 
}
*/

