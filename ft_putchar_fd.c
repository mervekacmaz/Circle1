/*
Outputs the character ’c’ to the given file
descriptor.
*/


#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* #include <fcntl.h>
 int main(void)
 {
     int fd = open("/home/merve/Desktop/fd.txt",O_WRONLY);
     ft_putchar_fd('x', fd);
 }

#include <fcntl.h>
  int		main()
 {
     int fd ;
     fd = open("deneme.txt", 777);
     ft_putchar_fd('x', fd);
}*/
