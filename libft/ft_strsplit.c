/*
 * Description: Allocates (with malloc(3)) and returns an array of “fresh”
 * strings (all ending with ’\0’, including the array itself)
 * obtained by spliting s using the character c as a delimiter.
 * If the allocation fails the function returns NULL. Example
 * : ft_strsplit("*hello*fellow***students*", ’*’)
 * returns the array ["hello", "fellow", "students"].
 * Param. #1: The string to split.
 * Param. #2: The delimiter character.
 * Return value: The array of “fresh” strings result of the split.
 * Libc functions: malloc(3), free(3)
*/
#include "libft.h"

static int	ft_string_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[j] && s[j] != c)
		i = 1;
	while (s[j])
	{
		if (s[j] == c && s[j + 1] != c && s[j + 1])
			i++;
		j++;
	}
	return (i);
}

static char	*ft_get_split(char const *str, char c, int start)
{
	int		i;
	int		end;
	char	*fresh;

	while (str[start] == c && str[start])
		start++;
	end = start;
	while (str[end] != c && str[end])
		end++;
	fresh = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!fresh)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		fresh[i] = str[start + i];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}

char	**ft_strsplit(char const *s, char c)
{
	int		count;
	char	**tab;
	int		i;
	int		start;

	if (!s)
		return (NULL);
	count = ft_string_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	i = 0;
	start = 0;
	while (s[start] == c)
		start++;
	while (i < count)
	{
		tab[i] = ft_get_split(s, c, start);
		while (s[start] == c)
			start++;
		start += ft_strlen(tab[i]);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
