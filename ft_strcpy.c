#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *s;

	s = dst;
	while (*src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (s);
}
