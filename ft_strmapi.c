/*
Strmapi, applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char my_func(unsigned int i, char str)
// {
// 	printf("My inner function: index = %d and %c\n", i, str);
//  	return str - 32;
// }
// #include <stdio.h>
// int main()
// {
//  	char str[10] = "hello.";
//  	printf("The result is %s\n", str);
//  	char *result = ft_strmapi(str, my_func);
//  	printf("The result is %s\n", result);
//  	return 0;
// }
