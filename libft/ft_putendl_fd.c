/*
 * Description: Outputs the string s to the file descriptor fd followed by a
 * ’\n’.
 * Param. #1: The string to output.
 * Param. #2: The file descriptor.
 * Return value: None.
 * Libc functions: write(2).
*/
#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
