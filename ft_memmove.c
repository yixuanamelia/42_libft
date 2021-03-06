/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 16:42:50 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:54:39 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
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
