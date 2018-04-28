#include "libft.h"

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	char *s;

	s = dst;
	while (*src != '\0' && n > 0)
	{
		*dst++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dst++ = '\0';
		n--;
	}
	return (s);
}
