/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_action_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:56:50 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:47:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_dosb(t_list **stk_b)
{
	t_list	*next;

	next = (*stk_b)->next;
	(*stk_b)->next = next->next;
	next->next = *stk_b;
	*stk_b = next;
	ft_printf("sb\n");
}

void ps_dorrb(t_list **stk_b)
{
	t_list	*pop;

	pop = ft_lstpop_bot(*stk_b);
	ft_lstadd_front(stk_b, pop);
	ft_printf("rrb\n");
}

void ps_dorb(t_list **stk_b)
{
	t_list	*pop;

	pop = ft_lstpop_top(stk_b);
	ft_lstadd_back(stk_b, pop);
	ft_printf("rb\n");
}

void ps_dopa(t_list **stk_a, t_list **stk_b)
{
	t_list	*pop;

	if (!stk_a)
	{
		*stk_a = ft_lstpop_top(stk_b);
		ft_printf("pa\n");
		return ;
	}
	else
	{
		pop = ft_lstpop_top(stk_b);
		ft_lstadd_front(stk_a, pop);
		ft_printf("pa\n");
	}
}
