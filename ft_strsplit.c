/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 18:53:18 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:56:45 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_strnext(const char *str, char c, int sk)
{
	if (sk)
		while (*str != '\0' && *str == c)
			str++;
	else
		while (*str != '\0' && *str != c)
			str++;
	return (str);
}

static char			**ft_tabedel(char **r, int len)
{
	int i;

	i = 0;
	while (i < len)
		free(r[i]);
	free(r);
	return (NULL);
}

static int			ft_str_count(const char *str, int seq)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str = ft_strnext(str, seq, 1);
		if (*str != '\0')
		{
			i++;
			str = ft_strnext(str, seq, 0);
		}
	}
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**r;
	int			i;
	const char	*nx;

	if (s == NULL)
		return (NULL);
	r = (char**)malloc(sizeof(char*) * (ft_str_count(s, c) + 1));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		s = ft_strnext(s, c, 1);
		if (*s != '\0')
		{
			nx = ft_strnext(s, c, 0);
			r[i] = ft_strsub(s, 0, nx - s);
			if (r[i] == NULL)
				return (ft_tabedel(r, i));
			i++;
			s = nx;
		}
	}
	r[i] = 0;
	return (r);
}
