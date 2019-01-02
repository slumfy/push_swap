/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:44:07 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/30 15:50:57 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*ft_stack_create_elem(int data)
{
	t_stack	*new;

	if (!(new = (t_stack*)ft_memalloc(sizeof(t_stack))))
		exit(0);
	new->n = data;
	new->v = 0;
	new->next = NULL;
	return (new);
}

void	ft_stack_pushback(t_stack **begin_list, int data)
{
	t_stack	*tmp;

	if (*begin_list)
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_stack_create_elem(data);
	}
	else
		*begin_list = ft_stack_create_elem(data);
}

void	ft_stack_pushfront(t_stack **begin_list, int data)
{
	t_stack	*tmp;

	if (*begin_list)
	{
		tmp = ft_stack_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
		*begin_list = ft_stack_create_elem(data);
}

int		ft_stack_size(t_stack **begin_list)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *begin_list;
	if (tmp)
	{
		while (tmp)
		{
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}

void	ft_stack_clear(t_stack **begin_list)
{
	t_stack	*tmp;

	tmp = NULL;
	while (*begin_list)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	(*begin_list) = NULL;
}
