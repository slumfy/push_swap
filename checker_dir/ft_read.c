/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:24:05 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/02 18:29:25 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_is_op(t_data *data, char *str)
{
	int i;

	i = 0;
	while (data->base[i])
	{
		if (ft_strequ(data->base[i], str) == 1)
			return (1);
		i++;
	}
	return (0);
}

void	ft_read_stdin(t_data *data, char *filename)
{
	char	*line;
	int		fd;

	data->base = ft_init_inst_db();
	if (!filename)
		fd = 0;
	else
		fd = open(filename, O_RDONLY);
	if (fd < 0)
		exit(0);
	line = NULL;
	while (get_next_line(fd, &line) > 0)
	{
		if (!ft_is_op(data, line))
			ft_error();
		ft_list_pushback(&data->list, ft_strdup(line), ft_strlen(line));
		ft_strdel(&line);
		data->n_inst++;
	}
	if (!(data->inst = (int *)ft_memalloc(sizeof(int) * data->n_inst)))
		exit(0);
	if (filename)
		close(fd);
	free(data->base);
}

void	ft_parse_inst(t_data *data)
{
	t_list	*tmp;
	size_t	j;
	size_t	i;

	i = 0;
	tmp = data->list;
	data->base = ft_init_inst_db();
	while (tmp)
	{
		j = 0;
		while (data->base[j])
		{
			if (ft_strequ(data->base[j], tmp->data) == 1)
			{
				data->inst[i++] = j;
				break ;
			}
			else if (j == 10)
				ft_error();
			j++;
		}
		tmp = tmp->next;
	}
	free(data->base);
}

void	ft_read_arg(t_data *data, int ac, char **av)
{
	int			i;
	long long	tmp;

	i = 1;
	data->b = NULL;
	if (ft_strequ(av[1], "-v") == 1)
	{
		data->verbose = 1;
		i++;
	}
	while (i < ac)
	{
		if (!ft_strisdigit(av[i]))
			ft_error();
		tmp = (long long)ft_ltoi(av[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error();
		if (!(ft_check_double(data->a, tmp)))
			ft_error();
		ft_stack_pushback(&data->a, tmp);
		i++;
	}
}

int		ft_check_double(t_stack *a, int n)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		if (tmp->n == n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
