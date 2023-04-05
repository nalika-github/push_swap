/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_5sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:35:15 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/02 17:00:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_inlo3sort(t_list **stk_a, t_list **stk_b)
{
	ps_dora(stk_a);
	ps_dopa(stk_a, stk_b);
	ps_dosa(stk_a);
	ps_dorra(stk_a);
}

static void	do_inlo4sort(t_list **stk_a, t_list **stk_b)
{
	ps_dorra(stk_a);
	ps_dopa(stk_a, stk_b);
	ps_dora(stk_a);
	ps_dora(stk_a);
}

void	ps_4sort(t_list **stk_a, t_list **stk_b)
{
	int	inlo;

	ps_dopb(stk_a, stk_b);
	ps_3sort(stk_a);
	inlo = ps_inlo(stk_a, ((t_data *)(*stk_b)->data)->num);
	if (inlo == 1)
		ps_dopa(stk_a, stk_b);
	else if (inlo == 2)
	{
		ps_dopa(stk_a, stk_b);
		ps_dosa(stk_a);
	}
	else if (inlo == 3)
		do_inlo3sort(stk_a, stk_b);
	else if (inlo == 4)
	{
		ps_dopa(stk_a, stk_b);
		ps_dora(stk_a);
	}
}

void	ps_5sort(t_list **stk_a, t_list **stk_b)
{
	int	inlo;

	ps_dopb(stk_a, stk_b);
	ps_4sort(stk_a, stk_b);
	inlo = ps_inlo(stk_a, ((t_data *)(*stk_b)->data)->num);
	if (inlo == 1)
		ps_dopa(stk_a, stk_b);
	else if (inlo == 2)
	{
		ps_dopa(stk_a, stk_b);
		ps_dosa(stk_a);
	}
	else if (inlo == 3)
		do_inlo3sort(stk_a, stk_b);
	else if (inlo == 4)
		do_inlo4sort(stk_a, stk_b);
	else if (inlo == 5)
	{
		ps_dopa(stk_a, stk_b);
		ps_dora(stk_a);
	}
}
