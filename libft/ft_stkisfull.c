/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkisfull.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:18:18 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/15 10:45:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_stkisfull(t_stack *stack)
{
	if(!ft_stackisempty(stack))
	{
		if((unsigned int)stack->top == stack->cap - 1)
			return (1);
		else
			return (0);
	}
	else
	{
		ft_putstr_fd("stack isnt full because, Stack is empty.\n", 1);
		return (0);
	}
}
