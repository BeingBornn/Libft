/*
 * Description: Outputs the character c to the standard output.
 * Param. #1: The character to output.
 * Return value: None.
 * Libc functions: write(2).
*/
#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
