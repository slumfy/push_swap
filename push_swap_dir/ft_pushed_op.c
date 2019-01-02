/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushed_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/01 14:53:49 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/01 14:54:21 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_psa(t_data *data)
{
	t_stack	*tmp;

	if (data->a && ft_stack_size(&data->a) > 1)
	{
		tmp = data->a;
		data->a = data->a->next;
		tmp->next = data->a->next;
		data->a->next = tmp;
		ft_stack_pushback(&data->inst, 0);
	}
}

void	ft_psb(t_data *data)
{
	t_stack	*tmp;

	if (data->b && ft_stack_size(&data->b) > 1)
	{
		tmp = data->b;
		data->b = data->b->next;
		tmp->next = data->b->next;
		data->b->next = tmp;
		ft_stack_pushback(&data->inst, 1);
	}
}

void	ft_pss(t_data *data)
{
	ft_sa(data);
	ft_sb(data);
	ft_stack_pushback(&data->inst, 2);
}

void	ft_ppa(t_data *data)
{
	t_stack	*tmp;

	tmp = NULL;
	if (data->b)
	{
		tmp = data->b;
		ft_stack_pushfront(&data->a, tmp->n);
		data->b = data->b->next;
		free(tmp);
		ft_stack_pushback(&data->inst, 3);
	}
}

void	ft_ppb(t_data *data)
{
	t_stack	*tmp;

	tmp = NULL;
	if (data->a)
	{
		tmp = data->a;
		ft_stack_pushfront(&data->b, tmp->n);
		data->a = data->a->next;
		free(tmp);
		ft_stack_pushback(&data->inst, 4);
	}
}
