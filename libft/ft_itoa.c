/*
 * Description: Allocate (with malloc(3)) and returns a “fresh”
 * string ending with ’\0’ representing the integer n given as argument.
 * Negative numbers must be supported. If the allocation fails,
 * the function returns NULL.
 * Param. #1: The integer to be transformed into a string.
 * Return value: The string representing the integer passed as argument.
 * Libc functions: malloc(3)
*/
#include "libft.h"

#include "libft.h"

static size_t	get_len(int n)
{
	size_t	i;

	i = 1;
	while (n != 0)
	{
		n /= 10;
		if (n != 0)
			i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*fresh;
	size_t		len;
	int			num;

	num = n;
	len = get_len(n);
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	fresh = (char *)malloc(sizeof(char) * (len + 1));
	if (!fresh)
		return (NULL);
	*(fresh + len) = 0;
	while (len--)
	{
		*(fresh + len) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(fresh + 0) = '-';
	return (fresh);
}
