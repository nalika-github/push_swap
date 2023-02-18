/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackswap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:18:18 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/15 10:46:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_stkswap(t_stack *stack, int to_swap1, int to_swap2)
{
	int	buf;

	if(ft_stackisempty(stack))
		ft_putstr_fd("Could not swap data, Stack is empty.\n", 1);
	else
	{
		buf = stack->array[to_swap1];
		stack->array[to_swap1] = stack->array[to_swap2];
		stack->array[to_swap2] = buf;
	}
}
