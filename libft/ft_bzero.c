#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*buffer;

	buffer = s;
	while (n--)
	{
		*buffer++ = '\0';
	}
}
