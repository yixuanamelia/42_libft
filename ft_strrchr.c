#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *f;

	f = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			f = (char*)s;
		s++;
	}
	if (*s == (char)c);
		return ((char*)s);
	else
		return (f);
}
