/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:15:44 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/15 20:30:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ps_ispushable(t_list **stk_a, t_list **stk_b)
{
	int	top_a;
	int	top_b;
	int	bot_b;

	top_a = ((t_data *)((*stk_a)->data))->num;
	top_b = ((t_data *)((*stk_b)->data))->num;
	bot_b = ((t_data *)((ft_lstlast(*stk_b))->data))->num;
	if (top_a > top_b && top_a < bot_b)
		return (1);
	return (0);
}

void	ps_doins(t_list **stk_a, t_list **stk_b, int *chunk)
{
	int	stop;
	int	top_a;
	int	top_b;

	stop = 0;
	top_a = ((t_data *)((*stk_a)->data))->num;
	if (!ps_isinchunk(ft_lstlast(*stk_b), chunk))
		ps_dorb(stk_b);
	while (stop == 0)
	{
		top_b = ((t_data *)((*stk_b)->data))->num;
		if (ps_ispushable(stk_a, stk_b))
			stop = 1;
		else if (top_a < top_b)
			ps_dorb(stk_b);
		else if (top_a > top_b)
			ps_dorrb(stk_b);
	}
}
