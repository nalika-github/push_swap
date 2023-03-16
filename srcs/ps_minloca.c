/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_minloca.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:56:50 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:47:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_minloca(t_list **stk)
{
	t_list	*lst;
	int		min;
	int		min_loca;

	lst = *stk;
	min = ((t_data *)lst->data)->num;
	while (lst)
	{
		if (min > ((t_data *)lst->data)->num)
			min = ((t_data *)lst->data)->num;
		lst = lst->next;
	}
	min_loca = 1;
	lst = *stk;
	while (lst)
	{
		if (min == ((t_data *)lst->data)->num)
			return (min_loca);
		min_loca++;
		lst = lst->next;
	}
	return (0);
}
