/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/05 12:35:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_freestk(t_data	*data, t_list *stk_a)
{
	t_list	*top;

	free(data);
	while (stk_a)
	{
		top = stk_a->next;
		free(stk_a);
		stk_a = top;
	}
	return (0);
}

int	ps_freesplit(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		printf("split %d = %s", i, split[i]);
		free(split[i]);
		i++;
	}
	printf("split member freed\n");
	// free(split);
	printf("split freed\n");
	return (0);
}
