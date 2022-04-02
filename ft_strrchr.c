/*
Locate character in a string. Returns a pointer to the last occurence of char c in string s.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = ft_strlen(ptr);
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
			return (ptr + i);
		i--;
	}
	return (NULL);
}

// #include<stdio.h>
// int main()
// {
//         char string[] = {"Hello World"};
//         int l = 108; // ascii code of l
//         int W = 87;
//         printf("last occurance is here : %s \n", ft_strrchr(string,l));
//         printf("last occurance of W is here: %s \n", ft_strrchr(string,W));
// }