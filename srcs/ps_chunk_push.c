/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_chunk_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:19:18 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 19:19:20 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ps_decision(t_list **stk_a, int *chunk, int stk_size)
{
	t_list	*lst;
	int		i;
	int		hold_1;
	int		hold_2;

	lst = *stk_a;
	hold_1 = 0;
	i = 1;
	while (lst)
	{
		if (hold_1 == 0 && ps_isinchunk(lst, chunk))
			hold_1 = i;
		if (ps_isinchunk(lst, chunk))
			hold_2 = i;
		i++;
		lst = lst->next;
	}
	if (hold_1 > stk_size - hold_2)
		return (2);
	return(1);
}


int	ps_isinchunk(t_list *lst, int *chunk)
{
	int	tage;

	tage = ((t_data *)lst->data)->tage;
	if (tage >= chunk[0] && tage <= chunk[1])
		return (1);
	return (0);
}

void	ps_chunk_push(t_list **stk_a, t_list **stk_b, int stk_size, int *chunk)
{
	int	deci;

	deci = ps_decision(stk_a, chunk, stk_size);
	if(deci == 1)
	{
		while (!ps_isinchunk(*stk_a, chunk))
			ps_dora(stk_a);
		ps_pushlogic(stk_a, stk_b, chunk);
	}
	if(deci == 2)
	{
		while (!ps_isinchunk(*stk_a, chunk))
			ps_dorra(stk_a);
		ps_pushlogic(stk_a, stk_b, chunk);
	}
}
