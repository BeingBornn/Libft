#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*char_src;
	unsigned char	*char_dest;

	char_src = (unsigned char *)src;
	char_dest = (unsigned char *)dest;
	i = 0;
	if (char_dest < char_src)
	{
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			char_dest[n] = char_src[n];
		}
	}
	return (dest);
}
