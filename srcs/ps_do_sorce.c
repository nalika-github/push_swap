/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_do_sorce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:31:06 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/15 20:34:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_do_sorce(t_list **stk_a, t_list **stk_b, int stk_size)
{
	if (ps_issorced(stk_a))
		return ;
	else if (stk_size == 2)
		ps_2sorce(stk_a);
	else if (stk_size == 3)
		ps_3sorce(stk_a);
	else if (stk_size == 4)
		ps_4sorce(stk_a, stk_b);
	else if (stk_size == 5)
		ps_5sorce(stk_a, stk_b);
	else if (stk_size <= 100)
		ps_100sorce(stk_a, stk_b, stk_size);
	else if (stk_size <= 500)
		ps_500sorce(stk_a, stk_b, stk_size);
}
