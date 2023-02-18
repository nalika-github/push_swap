/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_alighment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:31:06 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/16 16:48:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void do_alighment(t_list *stack_a, t_list stack_b, int stack_size)
{
	if (stack_size == 1)
		return ;
	else if (stack_size == 2)
		two_sorce(stack_a);
	else if (stack_size == 3)
		three_sorce(stack_a);
	else if (stack_size == 4)
		four_sorce(stack_a, stack_b);
	else if (stack_size == 5)
		five_sorce(stack_a, stack_b);
	else if (stack_size <= 20)
		twenty_sorce(stack_a, stack_b);
	else if (stack_size <= 100)
		onehundred_sorce(stack_a, stack_b);
	else if (stack_size <= 500)
		fivehundred_sorce(stack_a, stack_b);
}

void two_sorce(t_list *stack)
{
	t_list	lst;

	if (stack->content->tage == 2)
		do_sa(stack);
}

void three_sorce(t_list *stack)
{
	t_list	lst;
	int		max_loca;
	int		min_loca;

	lst = stack->next;
	if (stack->content->tage == 1 && lst->content->tage == 2)
		do_sa(stack);
	if (stack->content->tage == 3 && lst->content->tage == 2)
	{
		do_sa(stack);
		do_rra(stack);
	}
	if (stack->content->tage == 3 && lst->content->tage == 1)
		do_ra(stack);
	if (stack->content->tage == 1 && lst->content->tage == 3)
	{
		do_sa(stack);
		do_ra(stack);
	}
	if (stack->content->tage == 2 && lst->content->tage == 3)
		do_rra(stack);
}
