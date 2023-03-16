/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_chunk_pull.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:23:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/04 00:38:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_chunk_pull(t_list **stk_a, t_list **stk_b)
{
	int	size;

	size = ft_lstsize(*stk_b);
	while (size > 0)
	{
		if (ps_maxloca(stk_b) > (size / 2))
		{
			while (ps_maxloca(stk_b) != 1)
				ps_dorrb(stk_b);
			ps_dopa(stk_a, stk_b);
		}
		else
		{
			while (ps_maxloca(stk_b) != 1)
				ps_dorb(stk_b);
			ps_dopa(stk_a, stk_b);
		}
		size = ft_lstsize(*stk_b);
	}
}
