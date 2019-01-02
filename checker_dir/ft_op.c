/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 21:23:56 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/30 15:39:36 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(t_data *data)
{
	t_stack	*tmp;

	if (data->a && ft_stack_size(&data->a) > 1)
	{
		tmp = data->a;
		data->a = data->a->next;
		tmp->next = data->a->next;
		data->a->next = tmp;
	}
}

void	ft_sb(t_data *data)
{
	t_stack	*tmp;

	if (data->b && ft_stack_size(&data->b) > 1)
	{
		tmp = data->b;
		data->b = data->b->next;
		tmp->next = data->b->next;
		data->b->next = tmp;
	}
}

void	ft_ss(t_data *data)
{
	ft_sa(data);
	ft_sb(data);
}

void	ft_pa(t_data *data)
{
	t_stack	*tmp;

	tmp = NULL;
	if (data->b)
	{
		tmp = data->b;
		ft_stack_pushfront(&data->a, tmp->n);
		data->b = data->b->next;
		free(tmp);
	}
}

void	ft_pb(t_data *data)
{
	t_stack	*tmp;

	tmp = NULL;
	if (data->a)
	{
		tmp = data->a;
		ft_stack_pushfront(&data->b, tmp->n);
		data->a = data->a->next;
		free(tmp);
	}
}
