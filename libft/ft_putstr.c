/*
 * Prototype void ft_putstr(char const *s);
 * Description: Outputs the string s to the standard output.
 * Param. #1: The string to output.
 * Return value: None.
 * Libc functions: write(2).
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
