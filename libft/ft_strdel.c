/*
 * Description: Takes as a parameter the address of a string that need to be 
 * freed with free(3). Then sets its pointer to NULL.
 * Param. #1: The string's address that needs to be freed and its pointer set
 * to NULL.
 * Return value: None.
 * Libc functions: free(3).
*/
#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
