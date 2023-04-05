/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_3sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:35:15 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/02 17:00:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_2sort(t_list **stk_a)
{
	if (((t_data *)(*stk_a)->data)->tage == 2)
		ps_dosa(stk_a);
}

void	ps_3sort(t_list **stk)
{
	int		max_lo;
	int		min_lo;

	max_lo = ps_maxloca(stk);
	min_lo = ps_minloca(stk);
	if (min_lo == 2 && max_lo == 3)
		ps_dosa(stk);
	if (max_lo == 1 && min_lo == 3)
	{
		ps_dosa(stk);
		ps_dorra(stk);
	}
	if (max_lo == 1 && min_lo == 2)
		ps_dora(stk);
	if (max_lo == 2 && min_lo == 1)
	{
		ps_dosa(stk);
		ps_dora(stk);
	}
	if (max_lo == 2 && min_lo == 3)
	{
		ps_dorra(stk);
	}
}
