/*
Locates a substring in a string. Locates the first occurence of 
string needle in string haystack.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j < n))
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
    char *a = "mervekacmaz";
    char *b = "veka";
    printf("%s", ft_strnstr(a, b, 7));
}
*/