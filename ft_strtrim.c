/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

#include "libft.h"

int	is_char(char c, const char *set)
{
	while (*set != '\0')
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*r;
	size_t	ep;

	if (s == NULL || set == NULL)
		return (NULL);
	while (is_char(*s, set) && *s != '\0')
		s++;
	ep = ft_strlen(s);
	while (is_char(s[ep - 1], set) && ep != 0)
		ep--;
	r = (char *)malloc(sizeof(char) * (ep + 1));
	if (r == NULL)
		return (NULL);
	ft_strlcpy(r, (char *)s, ep + 1);
	return (r);
}

// #include<stdio.h>
// int main()
// {
//     char src[4] = "bruh";
// 	char dest[3] = "bro";
// 	char *str = ft_strtrim(dest, src);
// 	printf("%s", str);
// }

// int main()
// {
// 	printf("%s\n", ft_strtrim("abqbc", "abc"));
// 	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
// 	return 0;
// }