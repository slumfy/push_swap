/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_pushed_op.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/01 14:55:06 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/01 15:11:55 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prra(t_data *data)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (data->a)
	{
		tmp = data->a;
		prev = NULL;
		while (tmp->next)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev)
		{
			ft_stack_pushfront(&data->a, tmp->n);
			free(tmp);
			prev->next = NULL;
		}
		ft_stack_pushback(&data->inst, 8);
	}
}

void	ft_prrb(t_data *data)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (data->b)
	{
		tmp = data->b;
		prev = NULL;
		while (tmp->next)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev)
		{
			ft_stack_pushfront(&data->b, tmp->n);
			free(tmp);
			prev->next = NULL;
		}
		ft_stack_pushback(&data->inst, 9);
	}
}

void	ft_prrr(t_data *data)
{
	ft_rra(data);
	ft_rrb(data);
	ft_stack_pushback(&data->inst, 10);
}
