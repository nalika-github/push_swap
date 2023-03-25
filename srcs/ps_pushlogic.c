/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pushlogic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:02:58 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/16 19:10:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_startpush(t_list **stk_a, t_list **stk_b, int *chunk)
{
	if (ps_chknmem(*stk_b, chunk) == 0)
		ps_dopb(stk_a, stk_b);
	else if (ps_chknmem(*stk_b, chunk) == 1)
	{
		if (((t_data *)(*stk_a)->data)->num > ((t_data *)(*stk_b)->data)->num)
			ps_dopb(stk_a, stk_b);
		else
		{
			ps_dopb(stk_a, stk_b);
			ps_dosb(stk_b);
		}
	}
}

void	ps_dominchk(t_list **stk_a, t_list **stk_b, int *chunk)
{
	int	top_b;

	if (chunk[0] != 1)
	{
		while (ps_isinchunk(*stk_b, chunk))
			ps_dorb(stk_b);
		ps_dopb(stk_a, stk_b);
	}
	else
	{
		top_b = ((t_data *)(*stk_b)->data)->num;
		while (!ps_ismaxchk(*stk_b, top_b, chunk))
		{
			ps_dorb(stk_b);
			top_b = ((t_data *)(*stk_b)->data)->num;
		}
		ps_dopb(stk_a, stk_b);
	}
}

void	ps_pushlogic(t_list **stk_a, t_list **stk_b, int *chunk)
{
	int	top_a;

	top_a = ((t_data *)(*stk_a)->data)->num;
	if (ps_chknmem(*stk_b, chunk) <= 1)
		ps_startpush(stk_a, stk_b, chunk);
	else if (ps_ismaxchk(*stk_b, top_a, chunk))
		ps_dopb(stk_a, stk_b);
	else if (ps_isminchk(*stk_b, top_a, chunk))
		ps_dominchk(stk_a, stk_b, chunk);
	else
	{
		ps_doins(stk_a, stk_b, chunk);
		ps_dopb(stk_a, stk_b);
	}
}
