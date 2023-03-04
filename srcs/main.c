/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/04 13:06:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stk_a;
	t_list	*top;
	t_list	*stk_b;
	t_data	*data;
	int		stk_size;

	if (ps_input_error(argc, argv))
		return (0);
	data = ft_calloc((size_t)argc, sizeof(t_data));
	stk_a = ps_getstk_a(argc, argv, data);
	stk_b = 0;
	if (ps_data_error(stk_a))
		return (0);
	ps_tage(argc, stk_a);
	stk_size = ft_lstsize(stk_a);
	ps_do_sorce(&stk_a, &stk_b, stk_size);
	// top = stk_a;
	// while (stk_a)
	// {
	// 	ft_printf("stk_a->data->tage = %d\n", ((t_data *)stk_a->data)->tage);
	// 	stk_a = stk_a->next;
	// }
	// stk_a = top;
	free(data);
	while(stk_a)
	{
		top = stk_a->next;
		free(stk_a);
		stk_a = top;
	}
	return(0);
}
