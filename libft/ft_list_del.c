/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:11:59 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/12 15:10:04 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_del(t_list **begin_list)
{
	t_list	*tmp;

	tmp = NULL;
	while (*begin_list)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		ft_strdel(&tmp->data);
		free(tmp);
	}
	(*begin_list) = NULL;
}
