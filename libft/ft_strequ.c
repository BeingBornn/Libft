/*
 * Description: Lexicographical comparison between s1 and s2. If the 2
 * strings are identical the function returns 1, or 0 otherwise.
 * Param. #1: The first string to be compared.
 * Param. #2: The second string to be compared.
 * Return value: 1 or 0 according to if the 2 strings are identical or not.
 * Libc functions: None.
*/
#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	if (s1[i] - s2[i] == 0)
	{
		return (1);
	}
	return (0);
}
