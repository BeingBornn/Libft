#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*char_dest;
	unsigned char	*char_src;
	unsigned int	i;
	unsigned char	char_c;

	i = 0;
	char_dest = (unsigned char *)dest;
	char_src = (unsigned char *)src;
	char_c = (unsigned char)c;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		if (char_dest[i] == char_c)
			return (char_dest + i + 1);
		i++;
	}
	return (NULL);
}
