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
#include "push_swap.h"

void ps_do_sorce(t_list *stack_a, t_list stack_b, int stack_size)
{
	if (stack_size == 1)
		return ;
	else if (stack_size == 2)
		ps_2sorce(stack_a);
	else if (stack_size == 3)
		ps_3sorce(stack_a);
	else if (stack_size == 4)
		ps_4sorce(stack_a, stack_b);
	else if (stack_size == 5)
		ps_5sorce(stack_a, stack_b);
	else if (stack_size <= 20)
		ps_20sorce(stack_a, stack_b);
	else if (stack_size <= 100)
		ps_100sorce(stack_a, stack_b);
	else if (stack_size <= 500)
		ps_500sorce(stack_a, stack_b);
}

void two_sorce(t_list *stack)
{
	t_list	lst;

	if (stack->content->tage == 2)
		do_sa(stack);
}

int	ps_findmaxloca(t_list *stack)
{
	t_list	*lst;
	int		max;
	int		max_loca;

	lst = stack;
	max = lst->content->data;
	max_loca = 1;
	while (lst)
	{
		if(max < lst->content->data)
			max = lst->content->data;
		lst->next;
	}
	max_loca = 1;
	lst = stack;
	while (lst)
	{
		if(max == lst->content->data)
			return(max_loca);
		max_loca++;
		lst->next;
	}
	return (-1);
}

int	ps_findminloca(t_list *stack)
{
	t_list	*lst;
	int		min_loca;

	lst = stack;
	max_loca = 1;
	while (lst)
	{
		if (lst->content->tage == 1)
			return (min_loca);
		min_loca++;
		lst->next;
	}
	return (-1);
}

void ps_3sorce(t_list *stack)
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
