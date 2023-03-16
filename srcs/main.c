/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/15 20:39:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_free(t_data	*data, t_list *stk_a)
{
	t_list	*top;

	free(data);
	while (stk_a)
	{
		top = stk_a->next;
		free(stk_a);
		stk_a = top;
	}
}

int	main(int argc, char **argv)
{
	t_list	*stk_a;
	t_list	*stk_b;
	t_data	*data;
	int		stk_size;

	if (ps_input_error(argc, argv))
		return (0);
	data = ft_calloc((size_t)argc, sizeof(t_data));
	stk_a = ps_getstk_a(argv, data);
	stk_b = 0;
	if (ps_data_error(stk_a))
	{
		ps_free(data, stk_a);
		return (0);
	}
	ps_tage(argc, stk_a);
	stk_size = ft_lstsize(stk_a);
	ps_do_sorce(&stk_a, &stk_b, stk_size);
	ps_free(data, stk_a);
	return (0);
}
