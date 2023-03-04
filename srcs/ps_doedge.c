/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doedge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:15:44 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/04 00:13:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	doedge_case(int maxlo, int minlo, t_list **stk_b)
{
	int	size;
	int	hold[2];

	size = ft_lstsize(*stk_b);
	if (maxlo < size / 2 && minlo < size / 2)
		return (1);
	if (maxlo > size / 2 && minlo > size / 2)
		return (2);
	if (maxlo > size / 2)
	{
		maxlo = size - maxlo;
		if (minlo < maxlo)
			return (1);
		else
			return (2);
	}
	if (minlo > size / 2)
	{
		minlo = size - minlo;
		if (maxlo < minlo)
			return (1);
		else
			return (2);
	}
}

void ps_doedge(t_list **stk_b)
{
	int	c;
	int	maxlo;
	int	minlo;

	maxlo = ps_maxloca(stk_b);
	minlo = ps_minloca(stk_b);
	c = doedge_case(maxlo, minlo, stk_b);
	if (c == 1)
	{
		while (maxlo != 1 && minlo != 1)
		{
			ps_dorb(stk_b);
			maxlo = ps_maxloca(stk_b);
			minlo = ps_minloca(stk_b);
		}
	}
	if (c == 2)
	{
		while (maxlo != 1 && minlo != 1)
		{
			ps_dorrb(stk_b);
			maxlo = ps_maxloca(stk_b);
			minlo = ps_minloca(stk_b);
		}
	}
}

void ps_doins(t_list **stk_a, t_list **stk_b)
{
	int	stop;
	int	top_a;
	int	top_b;
	int	bot_b;

	stop = 0;
	top_a = ((t_data *)((*stk_a)->data))->num;
	while(stop == 0)
	{
		top_b = ((t_data *)((*stk_b)->data))->num;
		bot_b = ((t_data *)((ft_lstlast(*stk_b))->data))->num;
		if (top_a > top_b && top_a > bot_b)
			ps_dorb(stk_b);
		else if (top_a < top_b && top_a < bot_b)
			ps_dorrb(stk_b);
		else
			stop = 1;
	}
}
