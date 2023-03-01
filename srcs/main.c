/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:44:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int argc, char **argv)
// {
// 	t_list	*stk_a;
// 	t_list	*stk_b;
// 	int		stk_size

// 	if (ps_handle_error(argc, argv))
// 		return (0);
// 	stk_a = ps_stk_a(argc, argv);
// 	stk_size = ft_lstsize(stk_a);
// 	ps_tage(stk_a);
// 	do_alighment(stk_a, stk_b, stk_size);
// 	ft_lstclear(&stk_a, free);
// 	ft_lstclear(&stk_b, free);
// 	return(0);
// }

int	main(int argc, char **argv)
{
	t_list	*stk_a;
	t_list	*top;
	t_list	*stk_b;
	int		stk_size;

	if (ps_input_error(argc, argv))
		return (0);
	stk_a = ps_getstk_a(argc, argv);
	stk_b = 0;
	if (ps_data_error(stk_a))
		return (0);
	ps_tage(argc, stk_a);
	stk_size = ft_lstsize(stk_a);
	ps_do_sorce(&stk_a, &stk_b, stk_size);
	while (stk_a)
	{
		ft_printf("stk_a->data->tage = %d\n", ((t_data *)stk_a->data)->tage);
		stk_a = stk_a->next;
	}
	// ft_lstclear(&stk_a, free);
	// ft_lstclear(&stk_b, free);
	return(0);
}
