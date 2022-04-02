/*
 Memcpy copies n bytes from memory area src to memory area dst. It may cause some overlapping. In that case, you should use memove. It is safer.
 1.Create three variables. One to be a counter, the other two is to cast our given parameter strings into char pointers. 
 2. Begin the loop. If strings cannot be found, return 0. 
 3. Do the copying and increase the counter.
 4. Return the first parameter. 
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char *)src;

	if (!src && !dst)
		return (0);
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>

int main()
{
	char c[4] = "abcd";
	char d[4] = "efgh";
	char *str = ft_memcpy(d, c, 3);
	printf("%s", str);
}
*/
