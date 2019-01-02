/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 19:53:53 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/01 17:40:23 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		main(int ac, char **av)
{
	t_data	*data;

	if (ac <= 1)
		return (0);
	if (!(data = (t_data*)ft_memalloc(sizeof(t_data))))
		return (0);
	if (ft_strequ(av[1], "-f") == 1)
	{
		ft_read_stdin(data, av[2]);
		av += 2;
		ac -= 2;
	}
	else
		ft_read_stdin(data, NULL);
	ft_parse_inst(data);
	ft_read_arg(data, ac, av);
	ft_exec(data);
	ft_check_ifsort(data);
	ft_stack_clear(&data->a);
	ft_stack_clear(&data->b);
	free(data->inst);
	ft_list_del(&data->list);
	free(data);
	return (0);
}
