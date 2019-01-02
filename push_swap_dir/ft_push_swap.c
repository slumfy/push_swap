/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 16:32:10 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/01 17:26:28 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_struct(t_data *data)
{
	if (data->inst)
		free(data->inst);
	if (data->a)
		ft_stack_clear(&data->a);
	if (data->b)
		ft_stack_clear(&data->b);
	if (data->base)
		free(data->base);
	free(data);
}

int		main(int ac, char **av)
{
	t_data	*data;

	if (ac <= 1)
		return (0);
	if (!(data = (t_data *)ft_memalloc(sizeof(t_data))))
		return (0);
	ft_read_arg(data, ac, av);
	if (ft_check_ifnsort(data, ac - 1))
	{
		ft_free_struct(data);
		return (0);
	}
	if (ac - 1 > 10)
		ft_quick_sort(data, ac - 1);
	else if (ac - 1 > 3)
		ft_insert_sort(data, ac - 1);
	else if (ac - 1 == 3)
		ft_spec_sort(data);
	else if (ac - 1 == 2)
		ft_spec_tsort(data);
	ft_print_inst(data);
	ft_free_struct(data);
	return (0);
}
