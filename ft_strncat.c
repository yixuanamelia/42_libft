#include "libft.h"

char	*ft_strncat(char *dst, const char *str, size_t n)
{
	char *c;

	c = dst;
	while (*c != '\0')
		c++;
	while (*src != '\0' && n > 0)
		*c++ = *str;
	*c = '\0';
	return (dst);
}
