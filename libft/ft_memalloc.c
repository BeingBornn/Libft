/*
 * Description: Allocates (with malloc(3)) and returns a "fresh" memory
 * area. The memory allocated is initialized to 0. if the
 * allocation fails, the function returns NULL.
 * Param. #1 : The size of the memory that needs to be allocated.
 * Return value : The allocated memory area.
 * Libc functions : malloc(3) 
*/
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = (void *)malloc(size);
	if (!fresh)
	{
		return (NULL);
	}
	return (fresh);
}
