/*
 Memchr scans memory for a character. Locates the first occurence of c in string s. Returns a pointer to the byte located.
 1. Create a char pointer to type cast string s. Also create a variable that we'll use as a counter
 2.Since const is unchangeable, you cannot write something in it. Change s from const void to void
 3.Start the loop. Continue until the program finds c in s and then return a pointer to the matching byte.
*/

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;
	size_t i;

	ptr = (void *)s;
	i = 0;

	while (i < n)
	{
		if (ptr[i] == (char)c);
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
	char *str = ft_memchr("sadugsuaca", 'a', 5);
	printf("%s", str);
}
*/


