/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 16:43:00 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:54:42 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int n, size_t len)
{
	unsigned char *tmp;

	tmp = (unsigned char*)str;
	while (len-- > 0)
		*tmp++ = (unsigned char)n;
	return (str);
}
