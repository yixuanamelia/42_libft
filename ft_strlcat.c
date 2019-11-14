/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 19:17:53 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:56:10 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*tdst;
	const char	*tsrc;
	size_t		n;
	size_t		dlen;

	tdst = dst;
	tsrc = src;
	n = size;
	while (n-- != 0 && *tdst != '\0')
		tdst++;
	dlen = tdst - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(tsrc));
	while (*tsrc != '\0')
	{
		if (n != 1)
		{
			*tdst++ = *tsrc;
			n--;
		}
		tsrc++;
	}
	*tdst = '\0';
	return (dlen + (tsrc - src));
}
