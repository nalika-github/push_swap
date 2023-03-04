/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inlo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:22:58 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 22:27:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_list *ps_lstillu(t_list *stk)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew(((t_data *)stk->data));
// 	stk = stk->next;
// 	while (stk)
// 	{
// 		ft_lstadd_back(&lst, ((t_data *)stk->data));
// 		stk = stk->next;
// 	}
// 	return (lst);
// }

//  int	ps_lstminnum(lst)
//  {
// 	int	min

// 	min = ((t_data *)lst->data)->num;
// 	while (lst)
// 	{
// 		if (((t_data *)lst->data)->num < min)
// 				min = ((t_data *)lst->data)->num;
// 		lst = lst->next;
// 	}
// 	return(min)
//  }

int	*ps_lsttoiar(t_list *lst)
{
	int	i;
	int	*ar;

	i = 0;
	ar = ft_calloc(4, sizeof(int));
	while (lst)
	{
		ar[i] = ((t_data *)lst->data)->num;
		i++;
		lst = lst->next;
	}
	return (ar);
}

void	ps_swap(int *ar, int i, int j)
{
	int buf;

	buf = ar[j];
	ar[j] = ar[i];
	ar[i] = buf;
}

int	*ps_ezsorce(t_list *lst)
{
	int		lst_size;
	int		i;
	int		j;
	int		*ar;

	i = 0;
	lst_size = ft_lstsize(lst);
	ar = ps_lsttoiar(lst);
	while (i < lst_size)
	{
		j = i + 1;
		while (j < lst_size)
		{
			if (ar[j] < ar[i])
				ps_swap(ar, i, j);
			j++;
		}
		i++;
	}
	return (ar);
}

int ps_inlo(t_list **stk, int to_find)
{
	int		i;
	int		*ar;

	ar = ps_ezsorce(*stk);
	i = 0;
	while (i < ft_lstsize(*stk))
	{
		if (ar[i] > to_find)
			return(i + 1);
		i++;
	}
	free(ar);
	return (i + 1);
}
