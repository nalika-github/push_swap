/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:06:33 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:49:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include <stdio.h>

typedef struct s_data
{
	int	tage;
	int	num;
}		t_data;

int		ps_input_error(int argc, char **argv);
int		ps_data_error(t_list *stk_a);
int		ps_inlo(t_list **stk, int to_find);
int		ps_maxloca(t_list **stk);
int		ps_minloca(t_list **stk);
int		ps_issorced(t_list **stk);

int		*ps_lsttoi_array(t_list **stk);
int		*ps_ezsorce(t_list *lst);

void	ps_tage(int argc, t_list *lst);
void	ps_do_sorce(t_list **stk_a, t_list **stk_b, int stk_size);
void	ps_dosa(t_list **stk_a);
void	ps_dora(t_list **stk_a);
void	ps_dorra(t_list **stk_a);
void	ps_dopb(t_list **stk_a, t_list **stk_b);
void	ps_dosb(t_list **stk_b);
void	ps_dorrb(t_list **stk_b);
void	ps_dorb(t_list **stk_b);
void	ps_dopa(t_list **stk_a, t_list **stk_b);
void	ps_2sorce(t_list **stk_a, int stk_size);
void	ps_3sorce(t_list **stk);
void	ps_4sorce(t_list **stk_a, t_list **stk_b);
void	ps_5sorce(t_list **stk_a, t_list **stk_b);
void	ps_100sorce(t_list **stk_a, t_list **stk_b, int stk_size);

t_list	*ps_getstk_a(int argc, char **argv);

#endif
