/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 23:34:09 by rvalenti          #+#    #+#             */
/*   Updated: 2018/12/30 15:57:42 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*ft_list_to_tab(t_stack **begin_list, size_t n)
{
	size_t	i;
	t_stack	*tmp;
	int		*tab;

	i = 0;
	tmp = *begin_list;
	tab = NULL;
	if (n > 0)
	{
		if (!(tab = (int *)ft_memalloc(sizeof(int) * n)))
			return (NULL);
		while (i < n && tmp)
		{
			tab[i] = tmp->n;
			tmp = tmp->next;
			i++;
		}
	}
	return (tab);
}

void	ft_sort_tab(int *tab, size_t size)
{
	size_t	i;
	int		tmp;
	int		sort;

	sort = 0;
	tmp = 0;
	while (!sort)
	{
		sort = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				sort = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}

int		ft_median(t_stack **begin_list, int size)
{
	int n;
	int	*tab;

	tab = ft_list_to_tab(begin_list, size);
	ft_sort_tab(tab, size);
	n = tab[size / 2];
	free(tab);
	return (n);
}
