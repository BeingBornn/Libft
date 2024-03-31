/*
 * Description: Allocates (with malloc(3)) and returns a “fresh” substring
 * from the string given as argument. The substring begins at
 * indexstart and is of size len. If start and len aren’t
 * refering to a valid substring, the behavior is undefined. If the
 * allocation fails, the function returns NULL.
 * Param. #1: The string from which create the substring.
 * Param. #2: The start index of the substring.
 * Param. #3: The size of the substring.
 * Return value: The substring.
 * Libc functions: malloc(3)
*/
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	fresh = (char *)malloc(len + 1);
	if (!fresh)
	{
		return (NULL);
	}
	while (s[i] && i < start)
	{
		i++;
	}
	while (j < len)
	{
		fresh[j] = s[i];
		i++;
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}
