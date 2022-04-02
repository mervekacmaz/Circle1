/*
Duplicate a string and returns a pointer to the duplicated string
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s1) + 1;
	copy = malloc(len);
	if (!copy)
		return (0);
	return (ft_memcpy(copy, s1, len));
}

// #include <stdio.h>
// int main()
// {
// 	char *str = ft_strdup("merveeeeeeeeee");
// 	printf("%s", str);
// }