/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;
	size_t	j;

	j = 0;
	i = start;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return ((char *)ft_calloc(1, 1));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (s[i] != 0 && j < len)
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
// 	size_t len = 4; 
// 	char *str = "sdsadsadsad";
// 	char *sub = ft_substr(str, 2, len);
// 	printf("%s", sub);
// }
