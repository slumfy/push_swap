/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 02:17:04 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/30 02:37:02 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_data *data)
{
	t_stack	*tmp;

	if (data->a)
	{
		tmp = data->a;
		ft_stack_pushback(&tmp, tmp->n);
		data->a = data->a->next;
		free(tmp);
	}
}

void	ft_rb(t_data *data)
{
	t_stack	*tmp;

	if (data->b)
	{
		tmp = data->b;
		ft_stack_pushback(&tmp, tmp->n);
		data->b = data->b->next;
		free(tmp);
	}
}

void	ft_rr(t_data *data)
{
	ft_ra(data);
	ft_rb(data);
}
