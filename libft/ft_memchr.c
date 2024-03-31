#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_s;

	char_s = (unsigned char *)s;
	while (n--)
	{
		if (*char_s == (unsigned char)c)
		{
			return (char_s);
		}
		char_s++;
	}
	return (NULL);
}
