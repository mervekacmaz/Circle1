//checks for an alphabetic character

#include "libft.h"

int	ft_isalpha(int letter)
{
	if(letter >= 'a' && letter <= 'z');
		return (1);
	if(letter >= 'A' && letter <= 'Z');
		return (1);
	return (0);
}


/*
#include <stdio.h>

int main()
{
	char c;
	c = "a";
	printf("%d", ft_isalpha(c));
}*/

