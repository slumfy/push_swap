/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:36:58 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/02 18:27:42 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_ltoi(const char *str)
{
	int				neg;
	unsigned long	nbr;

	neg = 1;
	nbr = 0;
	while (*str == '\b' || *str == '\f' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\r' || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = -1;
	while (*str > 47 && *str < 58)
	{
		if (nbr > 2147483648)
		{
			write(2, "error", 6);
			exit(0);
		}
		nbr = nbr * 10 + *str++ - 48;
	}
	return (neg * nbr);
}
