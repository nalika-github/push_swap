/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:06:33 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/03 20:09:47 by marvin           ###   ########.fr       */
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
int		ps_issorted(t_list **stk);
int		ps_isinchunk(t_list *lst, int *chunk);
int		ps_ismaxchk(t_list *stk, int num, int *chunk);
int		ps_isminchk(t_list *stk, int num, int *chunk);
int		ps_ismin(t_list *stk, int num);
int		ps_isedge(t_list **stk_b);
int		ps_chknmem(t_list *stk, int *chunk);
int		isargc_enough(int argc);
int		isargv_digit(char **argv);
int		argv_isoverflow(char **argv);
int		isargv_empthy(char **argv);
int		isdata_duplicated(t_list *stk_a);
int		ps_freestk(t_data	*data, t_list *stk_a);
int		ps_freesplit(char **split);

int		*ps_lsttoi_array(t_list **stk);
int		*ps_ezsort(t_list *lst);

void	ps_do_sort(t_list **stk_a, t_list **stk_b, int stk_size);
void	ps_dosa(t_list **stk_a);
void	ps_dora(t_list **stk_a);
void	ps_dorra(t_list **stk_a);
void	ps_dopb(t_list **stk_a, t_list **stk_b);
void	ps_dosb(t_list **stk_b);
void	ps_dorrb(t_list **stk_b);
void	ps_dorb(t_list **stk_b);
void	ps_dopa(t_list **stk_a, t_list **stk_b);
void	ps_2sort(t_list **stk_a);
void	ps_3sort(t_list **stk);
void	ps_4sort(t_list **stk_a, t_list **stk_b);
void	ps_5sort(t_list **stk_a, t_list **stk_b);
void	ps_100sort(t_list **stk_a, t_list **stk_b, int stk_size);
void	ps_500sort(t_list **stk_a, t_list **stk_b, int stk_size);
void	ps_chunk_push(t_list **stk_a, t_list **stk_b, int stk_size, int *chunk);
void	ps_chunk_pull(t_list **stk_a, t_list **stk_b);
void	ps_doedge(t_list **stk_b);
void	ps_doins(t_list **stk_a, t_list **stk_b, int *chunk);
void	ps_pushlogic(t_list **stk_a, t_list **stk_b, int *chunk);
void	ps_startpush(t_list **stk_a, t_list **stk_b, int *chunk);

char	**ps_argvtosplit(int argc, char **argv);

t_list	*ps_getstk_a(char **split, t_data *data);

#endif
