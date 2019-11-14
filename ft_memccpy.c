/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:22:56 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:54:20 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;

	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	while (size--)
	{
		*tmp_dest = *tmp_src;
		if (*tmp_src == (unsigned char)c)
			return (tmp_dest + 1);
		tmp_src++;
		tmp_dest++;
	}
	return (NULL);
}
