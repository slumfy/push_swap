#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
** struct double-link
*/
typedef struct		s_pile
{
	long int data;
	struct s_pile *next;
	struct s_pile *previous;
}			t_pile;

/*
** function operator
*/
void			ft_sa(t_pile *firsta, t_pile *seconda);
void			ft_sb(t_pile *firstb, t_pile *secondb);
void			ft_ss(t_pile *firsta, t_pile *seconda, t_pile *firstb, t_pile *secondb);
void			ft_pa(t_pile *pileb, t_pile *pilea);
void			ft_pb(t_pile *pilea, t_pile *pileb);
void			ft_ra(t_pile *firsta, t_pile *lasta);
void			ft_rb(t_pile *firstb, t_pile *lastb);
void			ft_rr(t_pile *firsta, t_pile *lasta, t_pile *firstb, t_pile *lastb);
void			ft_rra(t_pile *firsta, t_pile *lasta);
void			ft_rrb(t_pile *firstb, t_pile *lastb);
void			ft_rrr(t_pile *firsta, t_pile *lasta, t_pile *firstb, t_pile *lastb);

#endif
