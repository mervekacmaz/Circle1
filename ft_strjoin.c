/*
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
		ptr[i++] = *s1++;
	while (*s2 != '\0')
		ptr[i++] = *s2++;
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main()

// {
//     char *a = "bro";
//     char *b = "cool";
//     printf("%s", ft_strjoin(a, b));

// }
