/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:48:29 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/11 11:07:46 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_list **begin_list)
{
	int		i;
	t_list	*tmp;

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
