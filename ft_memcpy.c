include "libft'h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tdst;
	const char	*tsrc;

	tdst = dst;
	tsrc = src;
	while (n-- > 0)
		*tdst++ = *tsrc++;
	return (dst);
}
