/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkpeek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:18:18 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/15 10:45:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_stkpeek(t_stack *stack)
{
	if(ft_stackisempty(stack))
	{
		ft_putstr_fd("Could not return a peek because, Stack is empty.\n", 1);
		return(-2147483648);
	}
	else
		return (stack->array[stack->top]);
}
