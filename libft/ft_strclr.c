/*
 * Description: Sets every character of the string to the value of '\0'.
 * Param. #1: The string that needs to be cleared.
 * Return value: None.
 * Libc functions: None.
*/
#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
