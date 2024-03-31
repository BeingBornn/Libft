/*
 * Description: allocate (with malloc(3)) and return a "fresh" string ending
 * with '\0'. Each character of the string is initialized at
 * '\0'. If the allocation fails the fuction returns NULL.
 * Param. #1: The size of the string to be allocated.
 * Return value: The string allocated and initialized to 0.
 * Libc Functions: malloc(3)
*/
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;
	size_t	i;

	i = 0;
	fresh = (char *)malloc(size + 1);
	if (!fresh)
	{
		return (NULL);
	}
	while (i < size + 1)
	{
		fresh[i] = '\0';
		i++;
	}
	return (fresh);
}
