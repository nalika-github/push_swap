/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_100sorce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:35:15 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:43:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ps_chunk_div(int i, int stk_size, int *chunk)
{
	int	chunk_size;

	chunk_size = 20;
	chunk[0] = (i * chunk_size) + 1;
	chunk[1] = (i + 1) * chunk_size;
	if (chunk[1] > stk_size)
		chunk[1] = stk_size;
	return(chunk);
}

int	ps_isinchunk(t_list *lst, int *chunk)
{
	int	tage;

	tage = ((t_data *)lst->data)->tage;
	if (tage >= chunk[0] && tage <= chunk[1])
		return (1);
	return (0);
}

int	ps_decision(t_list **stk_a, int *chunk, int stk_size)
{
	t_list	*lst;
	int		i;
	int		hold_1;
	int		hold_2;

	lst = *stk_a;
	hold_1 = 0;
	i = 1
	while (lst)
	{
		if (hold_1 == 0 && ps_isinchunk(lst, chunk))
			hold_1 == i;
		if (ps_isinchunk(lst, chunk))
			hold_2 == i;
		i++;
		lst = lst->next;
	}
	if (hold_1 > stk_size - hold_2)
		return (2);
	return(1);
}

void	ps_chunk_push(t_list **stk_a, t_list **stk_b, int stk_size, int *chunk)
{
	int	deci;

	deci = ps_decision(stk_a, chunk, stk_size);
	if(deci = 1)
	{
		while (!ps_isinchunk(lst, chunk))
		{
			ps_dora(stk_a)
			lst = lst->next;
		}
		ps_dora(stk_a);
		ps_dopb(stk_a, stk_b);
	}
	if(deci = 2)
	{
		while (!ps_isinchunk(lst, chunk))
		{
			ps_dorra(stk_a)
			lst = lst->next;
		}
		ps_dorra(stk_a);
		ps_dopb(stk_a, stk_b);
	}
}

void	ps_chunk_pull()
{

}

void	ps_100sorce(t_list **stk_a, t_list **stk_b, int stk_size)
{
	int	i;
	int	j;
	int	chunk[2];

	i = 0;
	chunk = [0, 0];
	while (chunk[1] < stk_size)
	{
		chunk = ps_chunk_div(i, stk_size, &chunk);
		j = chunk[0];
		while (j <= chunk[1])
		{
			ps_chunk_push(stk_a, stk_b);
			j++;
		}
		i++;
	}
	ps_chunk_pull(stk_a, stk_b);
}
