/*
 This function writes n bytes of 0 to the string s. All we need to do is to use our ft_memset function here to fill the string with n zeroed bytes.
*/

#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}


