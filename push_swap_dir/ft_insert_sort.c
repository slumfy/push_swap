/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 15:36:49 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/02 15:46:39 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insert_sort(t_data *data, int size)
{
	int	j;
	int	i;

	i = 3;
	ft_allpb(data, size);
	while (i < size)
	{
		j = 0;
		if (data->a)
		{
			while (data->a->n < data->b->n && j < i)
			{
				ft_pra(data);
				j++;
			}
		}
		ft_ppa(data);
		if (j == size - 1)
			ft_pra(data);
		else
			while (j-- > 0)
				ft_prra(data);
		i++;
	}
}

void	ft_allpb(t_data *data, int size)
{
	int	i;

	i = 3;
	while (i < size)
	{
		ft_ppb(data);
		i++;
	}
	if (!ft_check_ifnsort(data, 3))
		ft_spec_sort(data);
}
