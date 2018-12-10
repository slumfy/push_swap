#include "push_swap.h"

void	ft_sa(t_pile *firsta, t_pile *seconda)
{
	long int tmp;

	if (firsta && seconda)
	{
		tmp = firsta.data;
		firsta.data = seconda.data;
		seconda.data = tmp;
//		ft_putstr("sa\n");
	}
}
