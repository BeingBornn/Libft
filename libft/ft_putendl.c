/*
 * Description: Outputs the string s to the standard output followed by a
 * ’\n’.
 * Param. #1: The string to output.
 * Return value: None.
 * Libc functions: write(2).
*/
#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
