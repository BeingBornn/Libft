#include "libft.h"

int	ft_isspace(char nptr)
{
	if ((nptr >= 9 && nptr <= 13) || nptr == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		nb;
	int		mb;
	size_t	i;

	i = 0;
	nb = 0;
	mb = 1;
	while (ft_isspace(nptr[i]) && nptr[i])
		i++;
	if (nptr[i] == '-')
	{
		mb *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		nb = (nb * 10) + (nptr[i] - '0');
		i++;
	}
	nb *= mb;
	return (nb);
}
