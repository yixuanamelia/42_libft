#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		n;
	int		i;
	int		*s1;

	n = 0;
	i= 0;
	while (s[n])
		n++;
	s1 = (char*)malloc(sizeof(char) * n + 1);
	if (s1 == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
