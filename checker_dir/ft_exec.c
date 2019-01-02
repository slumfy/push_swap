/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 15:39:08 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/01 16:12:10 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_exec(t_data *data)
{
	int		i;
	void	(*tab[11])(t_data *data);

	tab[0] = ft_sa;
	tab[1] = ft_sb;
	tab[2] = ft_ss;
	tab[3] = ft_pa;
	tab[4] = ft_pb;
	tab[5] = ft_ra;
	tab[6] = ft_rb;
	tab[7] = ft_rr;
	tab[8] = ft_rra;
	tab[9] = ft_rrb;
	tab[10] = ft_rrr;
	i = 0;
	while (i < data->n_inst)
	{
		tab[data->inst[i]](data);
		if (data->verbose == 1)
			ft_print_stack(data);
		i++;
	}
}

void	ft_check_ifsort(t_data *data)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (data->b)
	{
		ft_putstr("KO\n");
		return ;
	}
	tmp = data->a;
	tmp2 = NULL;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp2 = tmp->next;
			if (tmp->n > tmp2->n)
			{
				ft_putstr("KO\n");
				return ;
			}
			tmp = tmp->next;
		}
		ft_putstr("OK\n");
	}
}
