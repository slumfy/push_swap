/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_pushed_op.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/01 14:56:52 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/01 15:12:50 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pra(t_data *data)
{
	t_stack	*tmp;

	if (data->a)
	{
		tmp = data->a;
		ft_stack_pushback(&tmp, tmp->n);
		data->a = data->a->next;
		free(tmp);
		ft_stack_pushback(&data->inst, 5);
	}
}

void	ft_prb(t_data *data)
{
	t_stack	*tmp;

	if (data->b)
	{
		tmp = data->b;
		ft_stack_pushback(&tmp, tmp->n);
		data->b = data->b->next;
		free(tmp);
		ft_stack_pushback(&data->inst, 6);
	}
}

void	ft_prr(t_data *data)
{
	ft_ra(data);
	ft_rb(data);
	ft_stack_pushback(&data->inst, 7);
}
