/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 11:48:01 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/31 16:31:20 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_ifnsort(t_data *data, int n)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	int		i;

	i = 1;
	tmp = data->a;
	tmp2 = NULL;
	if (tmp)
	{
		while (i < n && tmp->next)
		{
			tmp2 = tmp->next;
			if (tmp->n > tmp2->n)
				return (0);
			tmp = tmp->next;
			i++;
		}
		return (1);
	}
	return (0);
}
