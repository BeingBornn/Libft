/*
 * Description; Applies the function f to each character of the string passed
 * as argument by giving its index as first argument to create a
 * “fresh” new string (with malloc(3)) resulting from the successive
 * applications of f.
 * Param. #1; The string to map.
 * Param. #2; The function to apply to each character of s and its index.
 * Return value; The “fresh” string created from the successive applications of
 * f.
 * Libc functions: malloc(3)
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			slen;
	char			*fresh;

	i = 0;
	slen = ft_strlen(s);
	fresh = (char *)malloc(slen + 1);
	if (!fresh)
	{
		return (0);
	}
	while (s[i])
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
