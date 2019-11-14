/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 13:03:23 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:56:20 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned	int i;
	char			*s2;

	i = 0;
	if (s)
	{
		s2 = ft_strnew(ft_strlen(s));
		if (s2 == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			s2[i] = f(i, s[i]);
			i++;
		}
		return (s2);
	}
	return (NULL);
}
