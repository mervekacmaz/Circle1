/*
Copy and Concatenate the strings. Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-
     terminating the result.
*/

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	if (!src || !dest)
		return (0);
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

// #include<stdio.h>
// int main()
// {
// 	char src[4] = "abcd";
// 	char dest[4] = "efgh";
// 	char *str = ft_strlcpy(dest, src, 3);
// 	printf("%s", str);
// }
