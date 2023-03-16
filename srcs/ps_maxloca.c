/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_maxloca.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:56:50 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:45:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_maxloca(t_list **stk)
{
	t_list	*lst;
	int		max;
	int		max_loca;

	lst = *stk;
	max = ((t_data *)lst->data)->num;
	while (lst)
	{
		if(max < ((t_data *)lst->data)->num)
			max = ((t_data *)lst->data)->num;
		lst = lst->next;
	}
	max_loca = 1;
	lst = *stk;
	while (lst)
	{
		if(max == ((t_data *)lst->data)->num)
			return(max_loca);
		max_loca++;
		lst = lst->next;
	}
	return (0);
}
