/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/16 11:41:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ps_getstack_a(int argc, char **argv)
{
	int			i;
	t_stkdata	*content;
	t_list 		*lst;
	t_list		new_lst;

	i = 1;
	content = ft_calloc((size_t)argc, sizeof(t_stkdata));
	content[i - 1]->data = ft_atoi(argv[i]);
	content[i - 1]->tage = NULL;
	lst = ft_lstnew(content);
	i++;
	while (argv[i])
	{
		content[i - 1]->data = ft_atoi(argv[i]);
		content[i - 1]->tage = NULL;
		new_lst = ft_lstnew(content);
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
	top = lst
	lowest = top;
	while (tage < argc)
	{
		lst = top;
		while (lst)
		{
			if(lst->content->tage == NULL && lowest->content->data < lst->content->data)
				lowest = lst;
			lst = lst->next;
		}
		lowest->content->tage = tage;
		tage++;
	}
}
