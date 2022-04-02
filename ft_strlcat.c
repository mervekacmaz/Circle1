/*
Copy and concatenate strings. Function appends the NUL-terminated string src to the end of dst.  It will append at most
     size - strlen(dst) - 1 bytes, NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	res;

	s = (char *)src;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > dstlen)
		res = srclen + dstlen;
	else
		res = srclen + size;
	while (s[i] && (dstlen + 1) < size)
	{
		dst[dstlen] = s[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	int cmp = ft_strlcat("abcd", "abcf", 4);
// 	printf("%d", cmp);
// }