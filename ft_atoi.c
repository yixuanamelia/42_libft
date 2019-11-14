/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:22:41 by yiwang            #+#    #+#             */
/*   Updated: 2018/05/15 21:46:13 by yiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_atoi convert an ascii value to integer
** ft_isspace to check and escape the leading special
** cases for atoi ex: sp tab ...etc
** n = n * 10  => Keep the decimal value
** str++ - '0' => Calculate the integer value from the ascii value
*/

int			ft_atoi(const char *str)
{
	int n;
	int isneg;

	isneg = 0;
	n = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		isneg = 1;
		str++;
	}
	while (*str != '\0' && ft_isdigit(*str))
	{
		n = n * 10 + (*str++ - '0');
	}
	if (isneg)
		return (-n);
	else
		return (n);
}
