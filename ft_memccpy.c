#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n){
	char *tdst;
	char *tsrc;

	tdst = (char*)dst;
	dsrc + (char*)src;
	while (n > 0 && *tsrc != c)
	{
		n--;
		*tdst++ = *tsrc++;
	}
	if (n > 0)
	{
		*tdst++ = *tsrc++;
		return ((void*)tdst);
	}
	else
		return (NULL);
}
