/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verbose.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 01:51:43 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/02 11:12:13 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		ft_print_stack(t_data *data)
{
	t_stack	*tmpa;
	t_stack	*tmpb;

	tmpa = data->a;
	tmpb = data->b;
	system("clear");
	ft_putstr("\n     A     |     B     \n------------------------\n");
	while (tmpa || tmpb)
	{
		if (tmpa)
			ft_write_a(tmpa->n, 1);
		else
			ft_write_a(0, 0);
		ft_putstr("|");
		if (tmpb)
			ft_write_b(tmpb->n, 1);
		else
			ft_write_b(0, 0);
		ft_putchar('\n');
		if (tmpa)
			tmpa = tmpa->next;
		if (tmpb)
			tmpb = tmpb->next;
	}
	usleep(WAIT);
}

int			ft_nblen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void		ft_write_a(int n, int isnum)
{
	int	i;
	int	len;

	i = 0;
	if (isnum == 1)
		len = ft_nblen(n);
	else
		len = 0;
	if (isnum == 1)
		ft_putnbr(n);
	while (i < (11 - len))
	{
		ft_putchar(32);
		i++;
	}
}

void		ft_write_b(int n, int isnum)
{
	int	i;
	int	len;

	i = 0;
	if (isnum == 1)
		len = ft_nblen(n);
	else
		len = 0;
	while (i < (11 - len))
	{
		ft_putchar(32);
		i++;
	}
	if (isnum == 1)
		ft_putnbr(n);
}
