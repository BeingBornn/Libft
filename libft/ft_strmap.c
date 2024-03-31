/*
 * Description: Applies the function f to each character of the string given
 * as argument to create a “fresh” new string (with malloc(3))
 * resulting from the successive applications of f.
 * Param. #1: The string to map.
 * Param. #2: The function to apply to each character of s.
 * Return value:The “fresh” string created from the successive applications of f.
 * Libc functions: malloc(3)
*/
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	fresh = (char *)malloc(slen + 1);
	if (!fresh)
	{
		return (NULL);
	}
	while (s[i])
	{
		fresh[i] = f(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
