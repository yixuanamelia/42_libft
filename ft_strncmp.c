#include "libft.h"

int		ft_strncpy(const char *s1, const char *s1, size_t n)
{
	while ((*s1 != '\0' && *s2 != '\0') && *S1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
