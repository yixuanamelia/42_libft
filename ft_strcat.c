/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 16:43:12 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:55:17 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	char *c;

	c = dst;
	while (*c != '\0')
		c++;
	while (*src != '\0')
		*c++ = *src++;
	*c = '\0';
	return (dst);
}
