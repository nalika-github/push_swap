/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_100sorce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:23:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/15 19:50:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_chunk_div(int i, int stk_size, int *chunk)
{
	int	chunk_size;

	chunk_size = 21;
	chunk[0] = (i * chunk_size) + 1;
	chunk[1] = (i + 1) * chunk_size;
	if (chunk[1] > stk_size)
		chunk[1] = stk_size;
}

void	ps_100sorce(t_list **stk_a, t_list **stk_b, int stk_size)
{
	int	i;
	int	j;
	int	chunk[2];

	i = 0;
	chunk[0] = 0;
	chunk[1] = 0;
	while (chunk[1] < stk_size)
	{
		ps_chunk_div(i, stk_size, chunk);
		j = chunk[0];
		while (j <= chunk[1])
		{
			ps_chunk_push(stk_a, stk_b, stk_size, chunk);
			j++;
		}
		i++;
	}
	ps_chunk_pull(stk_a, stk_b);
}
