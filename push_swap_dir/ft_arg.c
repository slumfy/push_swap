/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:24:05 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/31 16:31:36 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_read_arg(t_data *data, int ac, char **av)
{
	int			i;
	long long	tmp;

	i = 1;
	data->b = NULL;
	while (i < ac)
	{
		if (!ft_strisdigit(av[i]))
			ft_error();
		tmp = (long long)ft_ltoi(av[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error();
		if (!(ft_check_double(data->a, tmp)))
			ft_error();
		ft_stack_pushback(&data->a, tmp);
		i++;
	}
}

int		ft_check_double(t_stack *a, int n)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		if (tmp->n == n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
