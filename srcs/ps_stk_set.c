/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stk_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/23 16:43:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_tage(int i, t_list *stk_a)
{
	int		tage;
	t_list	*lst;
	t_list	*lowest;

	tage = 1;
	while (tage <= i)
	{
		lst = stk_a;
		while (lst)
		{
			if (((t_data *)lst->data)->tage == 0)
				lowest = lst;
			lst = lst->next;
		}
		lst = stk_a;
		while (lst)
		{
			if (((t_data *)lst->data)->tage == 0 && \
			((t_data *)lowest->data)->num > ((t_data *)lst->data)->num)
				lowest = lst;
			lst = lst->next;
		}
		((t_data *)lowest->data)->tage = tage;
		tage++;
	}
}

t_list	*ps_getstk_a(char **split, t_data *data)
{
	int		i;
	t_list	*lst;
	t_list	*new_lst;

	i = 0;
	data[i].num = ft_atoi(split[i]);
	data[i].tage = 0;
	lst = ft_lstnew(data);
	i++;
	while (split[i])
	{
		data[i].num = ft_atoi(split[i]);
		data[i].tage = 0;
		new_lst = ft_lstnew(&data[i]);
		ft_lstadd_back(&lst, new_lst);
		i++;
	}
	ps_tage(i, lst);
	return (lst);
}
