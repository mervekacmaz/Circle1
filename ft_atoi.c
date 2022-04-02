/*
 Atoi converts a string into an integer

 1. Get rid of the spaces
 2. Take care of the negative signs
 3. Do the conversion
*/

#include "libft.h"
int ft_atoi(const char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;

	//get rid of the spaces using ascii table
	while(*str == 32 || (*str >= 9 && *str <= 13))
		str++;

	//take care of the sign
	if(*str == '-')
		sign *= -1;
	
	//do the conversion
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
	int atoi;

	if (ac == 2)
	{
		atoi = ft_atoi(av[1]);
		printf("%d", atoi);
	}
	return (0);
}
*/
