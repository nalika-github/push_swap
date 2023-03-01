/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_action_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:56:50 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:46:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_dosa(t_list **stk_a)
{
	t_list	*next;

	next = (*stk_a)->next;
	(*stk_a)->next = next->next;
	next->next = *stk_a;
	*stk_a = next;
	ft_printf("sa\n");
}

void ps_dorra(t_list **stk_a)
{
	t_list	*pop;

	pop = ft_lstpop_bot(*stk_a);
	ft_lstadd_front(stk_a, pop);
	ft_printf("rra\n");
}

void ps_dora(t_list **stk_a)
{
	t_list	*pop;

	pop = ft_lstpop_top(stk_a);
	ft_lstadd_back(stk_a, pop);
	ft_printf("ra\n");
}

void ps_dopb(t_list **stk_a, t_list **stk_b)
{
	t_list	*pop;

	if (!stk_b)
	{
		*stk_b = ft_lstpop_top(stk_a);
		ft_printf("pb\n");
		return ;
	}
	else
	{
		pop = ft_lstpop_top(stk_a);
		ft_lstadd_front(stk_b, pop);
		ft_printf("pb\n");
	}
}
