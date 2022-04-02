/* Memcmp compares byte string s1 with byte string s2. They are both n bytes long. Returns 0 if two strings are identical, otherwise it returns the difference. 
1.Create two char pointer to cast s1 and s2 parameters. Create another variable that we'll use as counter.
2.If program cant find anything in the strings, return 0.
3.While two strings are not identical, do the comparing and increase the variable.
*/


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *str1;
	char *str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;

	if (!s1 && !s2)
		return (0);

	while(i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] -(unsigned char)str2[i]);
		}
		i++;
	}
	return(0);
}
/*
#include <stdio.h>
int main()
{
	int cmp = ft_memcmp("abcd", "aBcd", 2);
	printf("%d", cmp);
}
*/
