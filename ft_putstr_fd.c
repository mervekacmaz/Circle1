/*
Outputs the string ’s’ to the given file
descriptor.
*/

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}

/*
int main(void)
{
    int fd = open("/home/merve/Desktop/fd.txt",O_WRONLY);
    ft_putstr_fd("merve", fd);
}
*/