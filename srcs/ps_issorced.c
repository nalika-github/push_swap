/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_issorced.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:56:50 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:45:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_issorced(t_list **stk)
{
	t_list	*lst;
	int		i;

	lst = *stk;
	i = 1;
	while(lst)
	{
		if(i != ((t_data *)lst->data)->tage)
			return (0);
		i++;
		lst = lst->next;
	}
	return (1);
}
