#include "libft.h"

void	*ft_memset(void *str, int n, size_t len)
{
	unsigned char *tmp;

	tmp = (unsigned char*)str;
	while (len-- > 0)
		*tmp++ = (unsigned char)n;
	return (str);
}
