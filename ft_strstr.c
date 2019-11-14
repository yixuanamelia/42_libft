/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 16:46:22 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:56:48 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *ts1;
	const char *ts2;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0')
	{
		ts1 = s1;
		ts2 = s2;
		while (*ts2 != '\0' && *ts1 == *ts2)
		{
			ts1++;
			ts2++;
		}
		if (*ts2 == '\0')
			return ((char*)s1);
		s1++;
	}
	return (0);
}
