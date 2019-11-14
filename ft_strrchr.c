/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 16:46:10 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:56:41 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *f;

	f = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			f = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (f);
}
