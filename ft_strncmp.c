/*
Compares two strings. 
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*ss;

	i = 0;
	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	while (i < n && (s[i] || ss[i]))
	{
		if (s1[i] != s2[i])
			return ((s)[i] - (ss)[i]);
		i++;
	}
	return (0);
}
// #include<stdio.h>
// int main()
// {
// 	//upper 32
// 	//lower -32
// 	//no dif is 0
// 	//numbers = difference
// 	int cmp = ft_strncmp("abcd", "aBcd", 2);
// 	printf("%lu", cmp);
// }