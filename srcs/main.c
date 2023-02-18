/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/16 13:08:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_size

	if (ps_handle_error(argc, argv))
		return (0);
	stack_a = ps_stack_a(argc, argv);
	stack_size = ft_lstsize(stack_a);
	ps_tage(stack_a);
	do_alighment(stack_a, stack_b, stack_size);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	return(0);
}
