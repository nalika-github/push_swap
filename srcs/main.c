/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <ptungbun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/18 16:47:36 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;
// 	int		stack_size

// 	if (ps_handle_error(argc, argv))
// 		return (0);
// 	stack_a = ps_stack_a(argc, argv);
// 	stack_size = ft_lstsize(stack_a);
// 	ps_tage(stack_a);
// 	do_alighment(stack_a, stack_b, stack_size);
// 	ft_lstclear(&stack_a, free);
// 	ft_lstclear(&stack_b, free);
// 	return(0);
// }

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	stack_a = ps_stack_a(argc, argv);
	if (ps_handle_error(argc, argv, stack_a))
		return (0);
	return(0);
}