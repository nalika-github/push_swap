/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_iserror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:22:30 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/08 19:22:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isargc_enough(int argc)
{
	if (argc < 2)
		return (0);
	return (1);
}

int	isargv_digit(char **split)
{
	int	i;
	int	j;

	i = 0;
	while (split[i])
	{
		j = 0;
		if (ft_issign(split[i][0]) && split[i][1])
			j++;
		while (split[i][j])
		{
			if (!ft_isdigit(split[i][j]) && split[i][j] != '\0')
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	argv_isoverflow(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (ft_atoi(split[i]) != ft_atol(split[i]))
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		i++;
	}
	return (0);
}

int	isargv_empthy(char **argv)
{
	int	i;
	int	j;
	int	is_allspace;

	i = 1;
	while (argv[i])
	{
		j = 0;
		is_allspace = 1;
		if (argv[i][0] == '\0')
			return (1);
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
				is_allspace = 0;
			j++;
		}
		if (is_allspace == 1)
			return (1);
		i++;
	}
	return (0);
}

int	isdata_duplicated(t_list *stk_a)
{
	t_list	*h_lst;
	t_list	*c_lst;

	h_lst = stk_a;
	while (h_lst)
	{
		c_lst = h_lst->next;
		while (c_lst)
		{
			if (((t_data *)c_lst->data)->num == ((t_data *)h_lst->data)->num)
			{
				ft_putstr_fd("Error\n", 2);
				return (1);
			}
			c_lst = c_lst->next;
		}
		h_lst = h_lst->next;
	}
	return (0);
}
