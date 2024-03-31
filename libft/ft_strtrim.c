/*	
 * Description: Allocates (with malloc(3)) and returns a copy of the string
 * given as argument without whitespaces at the beginning or at
 * the end of the string. Will be considered as whitespaces the
 * following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces
 * at the beginning or at the end, the function returns a
 * copy of s. If the allocation fails the function returns NULL.
 * Param. #1: The string to be trimed.
 * Return value: The “fresh” trimmed string or a copy of s.
 * Libc functions: malloc(3)
*/
#include "libft.h"

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}

int	ft_len(char const *s)
{
	int	start;
	int	end;
	int	fresh;

	fresh = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && ft_isspace(s[start]))
		start++;
	while (ft_isspace(s[end]) && start < end)
		end--;
	while (s[start] && start <= end)
	{
		fresh++;
		start++;
	}
	return (fresh);
}

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	int		start;
	int		end;
	int		i;

	fresh = (char *)malloc(ft_len(s) + 1);
	if (!fresh)
		return (0);
	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && ft_isspace(s[start]))
		start++;
	while (ft_isspace(s[end]) && start < end)
		end--;
	while (s[start] && start <= end)
	{
		fresh[i] = s[start];
		start++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
