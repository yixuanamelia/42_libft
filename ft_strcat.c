#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	char *c;

	c = dst;
	while (*c != '\0')
		c++;
	while (*src != '\0')
		*c++ = *src++;
	*c = '\0';
	return (dst);
}
