#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break ;
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
