/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 15:43:33 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:56:59 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char *s1;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	s1 = s + (ft_strlen(s) - 1);
	while (*s1 == ' ' || *s1 == '\n' || *s1 == '\t')
		s1--;
	return (ft_strsub(s, 0, s1 - s + 1));
}
