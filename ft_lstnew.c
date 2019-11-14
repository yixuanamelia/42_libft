/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 16:31:58 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:54:07 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;
	void	*cpy;

	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elem->next = NULL;
	if (!content)
	{
		elem->content = NULL;
		elem->content_size = 0;
	}
	else
	{
		if (!(cpy = malloc(content_size)))
		{
			free(elem);
			return (NULL);
		}
		elem->content = ft_memcpy(cpy, content, content_size);
		elem->content_size = content_size;
	}
	return (elem);
}
