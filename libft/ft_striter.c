/*
 * Description: Applies the function f to each character of the string passed
 * as argument. Each character is passed by address to f to be
 * modified if necessary.
 * Param. #1: The string to iterate.
 * Param. #2: The function to apply to each character of s.
 * Return value: None.
 * Libc functions: None.
*/
#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
