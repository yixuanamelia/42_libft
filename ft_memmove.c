#include "libft.h"

void	*ft_memmove(void *dst, void const *src,size_t n)
{
	char *tdst;
	char *tsrc;

	tdst = (char*)dst;
	tsrc = (char*)src;
	if (tsrc < tdst)
	{
		tsrc = tsrc + n - 1;
		tdst = tdst + n - 1;
		while (n > 0)
		{
			*tdst-- = *tsrc--;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*tdst++ = *tsrc++;
			n--;
		}
	}
	return (dst);
}
