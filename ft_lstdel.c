/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 16:12:27 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 17:53:54 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*klist;

	while (*alst)
	{
		klist = *alst;
		*alst = (*alst)->next;
		del(klist->content, klist->content_size);
		free(klist);
	}
	*alst = NULL;
}
