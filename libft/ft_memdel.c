/*
 * Description: Takes as a parameter the address of a memory area that needs
 * to be freed with free(3), then puts the pointer to NULL.
 * Param. #1: A pointer’s address that needs its memory freed and set to
 * NULL.
 * Return value: None.
 * Libc functions: free(3).
*/
#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
