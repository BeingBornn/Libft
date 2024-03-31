/*
 * Description: Allocates (with malloc(3)) and returns a
 * “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If
 * the allocation fails the function returns NULL.
 * Param. #1: The prefix string.
 * Param. #2: The suffix string.
 * Return value: The “fresh” string result of the concatenation of the 2 strings.
 * Libc functions: malloc(3)
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	s2len;
	size_t	s1len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	fresh = (char *)malloc(s1len + s2len + 1);
	while (s1[i])
	{
		fresh[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		fresh[i] = s2[j];
		i++;
		j++;
	}
	fresh[i] = '\0';
	return (fresh);
}
