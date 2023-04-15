/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inlo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:22:58 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/08 17:25:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_inlo(t_list *stk_a, t_list *stk_b)
{
	int	i;
	int	a;
	int	b;

	i = 1;
	b = ((t_data *)(stk_b->data))->tage;
	while (stk_a)
	{
		a = ((t_data *)(stk_a->data))->tage;
		if (b > a)
			i++;
		stk_a = stk_a->next;
	}
	return (i);
}
