/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:36:58 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/20 14:37:13 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_ltoi(const char *str)
{
	int			neg;
	long long	nbr;

	neg = 1;
	nbr = 0;
	while (*str == '\b' || *str == '\f' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\r' || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = -1;
	while (*str > 47 && *str < 58)
		nbr = nbr * 10 + *str++ - 48;
	return (neg * nbr);
}
