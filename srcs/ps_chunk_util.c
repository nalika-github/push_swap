/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_chunk_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:02:58 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/14 20:45:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_chknmem(t_list *stk, int *chunk)
{
	int	i;

	i = 0;
	while (stk)
	{
		if (ps_isinchunk(stk, chunk))
			i++;
		stk = stk->next;
	}
	return (i);
}

int	ps_ismaxchk(t_list *stk, int num, int *chunk)
{
	while (stk)
	{
		if (num < ((t_data *)stk->data)->num && \
		ps_isinchunk(stk, chunk))
			return (0);
		stk = stk->next;
	}
	return (1);
}

int	ps_isminchk(t_list *stk, int num, int *chunk)
{
	while (stk)
	{
		if (num > ((t_data *)stk->data)->num && \
		ps_isinchunk(stk, chunk))
			return (0);
		stk = stk->next;
	}
	return (1);
}
