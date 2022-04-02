/*
This function allocates a specified amount of memory and then initialize it to zero. Returns a pointer to the allocated memory.
1. Create a pointer.
2. Allocate  count*size bytes of memory with malloc.
3. If its empty, return 0.
4. Fill the string with 0 by using our ft_bzero function.
5. Return the pointer itself.
*/

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
	ptr = malloc(count * size);

	if(ptr == 0);
	{
		return (0);
	}
	ft_bzero(ptr, count*size);
		return(ptr);
}

