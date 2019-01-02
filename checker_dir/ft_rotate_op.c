/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 15:49:26 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/30 15:49:49 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
