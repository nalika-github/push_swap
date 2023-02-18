/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptungbun <ptungbun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/18 16:59:43 by ptungbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ps_getstack_a(int argc, char **argv)
{
	int			i;
	t_stkdata	*info;
	t_list 		*lst;
	t_list		new_lst;

	i = 1;
	info = ft_calloc((size_t)argc, sizeof(t_stkdata));
	info[i - 1]->data = ft_atoi(argv[i]);
	info[i - 1]->tage = NULL;
	lst = ft_lstnew(info);
	i++;
	while (argv[i])
	{
		info[i - 1]->data = ft_atoi(argv[i]);
		info[i - 1]->tage = NULL;
		new_lst = ft_lstnew(info);
		lst = ft_lstadd_back(&lst, &new_lst);
		i++;
	}
	return (lst);
}

void	ps_tage(int argc, t_list *lst)
{
	int		tage;
	t_list	*lowest;
	t_list	*top;

	tage = 1;
	top = lst;
	lowest = top;
	while (tage < argc)
	{
		lst = top;
		while (lst)
		{
			if(lst->info->tage == NULL && lowest->info->data < lst->info->data)
				lowest = lst;
			lst = lst->next;
		}
		lowest->info->tage = tage;
		tage++;
	}
}
