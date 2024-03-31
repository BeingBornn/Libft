/*
 * Description: Outputs the string s to the file descriptor fd.
 * Param. #1: The string to output.
 * Param. #2: The file descriptor.
 * Return value: None.
 * Libc functions: write(2).
*/
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
