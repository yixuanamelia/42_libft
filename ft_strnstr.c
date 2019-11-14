/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 19:00:50 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:56:37 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t			len;
	unsigned int	i;
	unsigned int	tmp;

	len = ft_strlen(find);
	if (len == 0)
		return (char*)(str);
	i = 0;
	while (str[i] != '\0' && (len + i) <= n)
	{
		tmp = 0;
		while (find[tmp] == str[tmp + i])
		{
			if (tmp == (len - 1))
				return ((char*)str + i);
			tmp++;
		}
		i++;
	}
	return (NULL);
}
