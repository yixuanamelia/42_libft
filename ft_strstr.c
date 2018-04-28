#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *ts1;
	const char *ts2;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0')
	{
		ts1 = s1;
		ts2 = s2;
		while (*ts2 != '\0' && *ts1 == *ts2)
		{
			ts1=++;
			ts2++;
		}
		if (*ts2 == '\0')
			return ((char*)s1)
		s1++;
	}
	return (NULL);
}
