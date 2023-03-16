/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:28:22 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/21 14:14:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *data)
{
	t_list	*room;

	room = (t_list *)malloc(sizeof(t_list));
	if (!room)
		return (0);
	room->next = 0;
	room->data = data;
	return (room);
}
