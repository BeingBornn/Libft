/*
** strstr, strcasestr, strnstr -- locate a substring in a string
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters
** are searched.  Characters that appear after a `\0' character are not
** searched. Since the strnstr() function is a FreeBSD specific API, it
** should only be used when portability is not a concern.
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && i + j < len)
		{
			if (haystack[i + j] != needle[j])
			{
				break ;
			}
			j++;
		}
		if (j == needlelen)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
