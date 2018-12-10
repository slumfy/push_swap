#include "push_swap.h"

void	ft_sb(t_pile *firstb, t_pile *secondb)
{
	long int tmp;

	if (firstb && secondb)
	{
		tmp = firstb.data;
		firstb.data = secondb.data;
		secondb.data = tmp;
//		ft_putstr("sb\n");
	}
}
