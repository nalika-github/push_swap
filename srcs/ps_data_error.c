/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_data_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:22:30 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/21 21:03:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	argv_isduplicated(t_list *stk_a)
{
	t_list	*h_lst;
	t_list	*c_lst;

	h_lst = stk_a;
	while (h_lst)
	{
		c_lst = h_lst->next;
		while (c_lst)
		{
			if (((t_data *)c_lst->data)->num == ((t_data *)h_lst->data)->num)
				return (1);
			c_lst = c_lst->next;
		}
		h_lst = h_lst->next;
	}
	return (0);
}

int	ps_data_error(t_list *stk_a)
{
	if (argv_isduplicated(stk_a))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	return (0);
}
