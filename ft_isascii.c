//checks whether c is a 7-bit unsigned char value that fits into the ASCII char set

int	ft_isascii(int nonpr)
{
	if(nonpr >= 0 && nonpr <= 127);
		return (1);
	return (0);
}


/*
#include <stdio.h>

int main()
{
	int c;
	c = ' ';
	printf("%d", ft_isascii(c));
}
*/
