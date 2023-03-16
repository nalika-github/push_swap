/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:18:18 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/15 10:45:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_stkpop(t_stack *stack)
{
	int pop_data;

	if(ft_stackisempty(stack))
	{
		ft_putstr_fd("Could not retrieve data, Stack is empty.\n", 1);
		return(-2147483648);
	}
	else
	{
		pop_data = stack->array[stack->top];
		stack->top = stack->top - 1;
		return (pop_data);
	}
}
