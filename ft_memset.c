/*
 *Memset fills len bytes of c to the string b. Returns the first argument.

 1. Create two variables. We'll use the one to go through the string and the other one to type cast.  
 2. Type cast string  b.
 3. Start the loop. Do the setting part. As you move through the string, fill it with c.

*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *p;
	
	i = 0;
	p = (unsigned char*)b;

	while(i < len)
		p[i++] = (unsigned char)c;
	return(b);
}

/*
#include <stdio.h>
int main(void)
{
	char *str = ft_memset("mervekacmaz",'p', 5);
	printf("%s", str);
}
*/
