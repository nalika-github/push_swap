/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:06:33 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/15 20:34:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
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
int		ps_isinchunk(t_list *lst, int *chunk);
int		ps_ismaxchk(t_list *stk, int num, int *chunk);
int		ps_isminchk(t_list *stk, int num, int *chunk);
int		ps_ismin(t_list *stk, int num);
int		ps_isedge(t_list **stk_b);
int		ps_chknmem(t_list *stk, int *chunk);

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
void	ps_2sorce(t_list **stk_a);
void	ps_3sorce(t_list **stk);
void	ps_4sorce(t_list **stk_a, t_list **stk_b);
void	ps_5sorce(t_list **stk_a, t_list **stk_b);
void	ps_100sorce(t_list **stk_a, t_list **stk_b, int stk_size);
void	ps_500sorce(t_list **stk_a, t_list **stk_b, int stk_size);
void	ps_chunk_push(t_list **stk_a, t_list **stk_b, int stk_size, int *chunk);
void	ps_chunk_pull(t_list **stk_a, t_list **stk_b);
void	ps_doedge(t_list **stk_b);
void	ps_doins(t_list **stk_a, t_list **stk_b, int *chunk);
void	ps_pushlogic(t_list **stk_a, t_list **stk_b, int *chunk);
void	ps_startpush(t_list **stk_a, t_list **stk_b, int *chunk);

t_list	*ps_getstk_a(char **argv, t_data *data);

#endif
