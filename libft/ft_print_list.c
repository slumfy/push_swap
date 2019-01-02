/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:24:29 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/19 18:55:17 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_list(t_list **begin_list)
{
	t_list	*tmp;

	tmp = *begin_list;
	if (tmp)
	{
		while (tmp)
		{
			ft_putendl(tmp->data);
			tmp = tmp->next;
		}
	}
}
