/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:18:18 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/15 10:43:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_stkadd(t_stack *stack, int add_data)
{
	if(ft_stackisfull(stack))
		return ;
	else
	{
		stack->top = stack->top + 1;
		stack->array[stack->top] = add_data;
	}
}
