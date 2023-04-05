/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_do_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:31:06 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/02 17:01:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_do_sort(t_list **stk_a, t_list **stk_b, int stk_size)
{
	if (ps_issorted(stk_a))
		return ;
	else if (stk_size == 2)
		ps_2sort(stk_a);
	else if (stk_size == 3)
		ps_3sort(stk_a);
	else if (stk_size == 4)
		ps_4sort(stk_a, stk_b);
	else if (stk_size == 5)
		ps_5sort(stk_a, stk_b);
	else if (stk_size <= 100)
		ps_100sort(stk_a, stk_b, stk_size);
	else if (stk_size <= 500)
		ps_500sort(stk_a, stk_b, stk_size);
}
