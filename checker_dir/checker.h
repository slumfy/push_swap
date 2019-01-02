/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/31 11:48:24 by rvalenti          #+#    #+#             */
/*   Updated: 2019/01/02 18:28:08 by rvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"
# include <fcntl.h>
# include <unistd.h>
# define WAIT 100000

typedef struct		s_stack
{
	int				n;
	int				v;
	struct s_stack	*next;
}					t_stack;
typedef struct		s_data
{
	t_list	*list;
	t_stack	*a;
	t_stack	*b;
	int		verbose;
	char	**base;
	int		n_inst;
	int		*inst;
}					t_data;
/*
**	PARSER
*/
int					ft_is_op(t_data *base, char *str);
char				**ft_init_inst_db(void);
int					ft_check_double(t_stack *a, int n);
void				ft_read_stdin(t_data *data, char *filename);
void				ft_parse_inst(t_data *data);
void				ft_read_arg(t_data *data, int ac, char **av);
void				ft_error(void);
/*
**	LIST STACK
*/
t_stack				*ft_stack_create_elem(int data);
void				ft_stack_pushback(t_stack **begin_list, int data);
void				ft_stack_pushfront(t_stack **begin_list, int data);
void				ft_stack_clear(t_stack **begin_list);
void				ft_check_ifsort(t_data *data);
int					ft_stack_size(t_stack **begin_list);
/*
**	MEDIAN
*/
int					ft_median(int *tab, size_t size);
int					*ft_list_to_tab(t_stack **begin_list, size_t n);
void				ft_sort_tab(int *tab, size_t size);

/*
**	OPERATION Push_swap
*/
void				ft_sa(t_data *data);
void				ft_sb(t_data *data);
void				ft_ss(t_data *data);
void				ft_pa(t_data *data);
void				ft_pb(t_data *data);
void				ft_ra(t_data *data);
void				ft_rb(t_data *data);
void				ft_rr(t_data *data);
void				ft_rra(t_data *data);
void				ft_rrb(t_data *data);
void				ft_rrr(t_data *data);
/*
**	VERBOSE
*/
void				ft_print_stack(t_data *data);
void				ft_write_a(int n, int isnum);
void				ft_write_b(int n, int isnum);
int					ft_nblen(int n);
void				ft_exec(t_data *data);
#endif
