/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 01:02:31 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/01 15:16:19 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_quick_sort(t_data *data, int size)
{
	int	pivot;
	int	i;

	i = 0;
	if (size < 2 || ft_check_ifnsort(data, size))
		return ;
	pivot = ft_median(&data->a, size);
	pivot = ft_partition(data, size, pivot);
	while (i < pivot && data->a != NULL)
	{
		ft_prra(data);
		i++;
	}
	ft_quick_sort(data, pivot);
	i = size - pivot;
	while (i > 0)
	{
		ft_ppa(data);
		i--;
	}
	ft_quick_sort(data, size - pivot);
}

int		ft_partition(t_data *data, int size, int pivot)
{
	int j;

	j = 0;
	while (size > 0)
	{
		if (data->a->n >= pivot)
		{
			ft_pra(data);
			j++;
		}
		else
			ft_ppb(data);
		size--;
	}
	return (j);
}
