#include "libft.h"

int		ft_isanum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
