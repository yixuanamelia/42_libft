#include "libft.h"

static int	ft_isspace (int c)
{
	return ((9 <= c && c <= 13) || c == 32);
}

int			ft_atoi(const char *str)
{
	int n;
	int isneg;

	n = 0;
	isneg = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	eles if (*str == '-')
	{
		isneg = 1;
		str++;
	}
	while (*str != '\0' && ft_isdigit(*str))
	{
		n = n * 10 + (*str++ - '0');
	}
	if (isneg)
		return (-n);
	else
		return (n);
}
