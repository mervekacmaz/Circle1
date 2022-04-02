/*
Outputs the string ’s’ to the given file descriptor
followed by a newline.
*/

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main(void)
// {
//     int fd = open("/home/merve/Desktop/fd.txt",O_WRONLY);
//     ft_putendl_fd("merve", fd);
// }