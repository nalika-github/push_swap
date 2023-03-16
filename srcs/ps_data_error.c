/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_data_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:22:30 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/01 18:47:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	argv_isduplicated(t_list *stk_a)
{
	t_list	*h_lst;
	t_list	*c_lst;

	h_lst = stk_a;
	while (h_lst)
	{
		c_lst = h_lst->next;
		while(c_lst)
		{
			if (((t_data *)c_lst->data)->num == ((t_data *)h_lst->data)->num)
				return (1);
			c_lst = c_lst->next;
		}
		h_lst = h_lst->next;
	}
	return (0);
}

int	ps_data_error(t_list *stk_a)
{
	if (argv_isduplicated(stk_a))
	{
		ft_putstr_fd("Error: invalid arguments is duplicated\n", 1);
		return (1);
	}
	return (0);
}

// static int	argv_iszero(char **argv)
// {
// 	int	i;
// 	int	j;
// 	int	sign;

// 	i = 1;
// 	sign = 0;
// 	while(argv[i])
// 	{
// 		j = 0;
// 		if (ft_issign(argv[i][0]) && argv[i][1])
// 		{
// 			sign = 1;
// 			j++;
// 		}
// 		while(argv[i][j])
// 		{
// 			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '\0')
// 			{
// 				ft_putstr_fd("Error: invalid zero input.\n", 1);
// 				return (0);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

// static int	argv_isduplicated(int argc, char **argv)
// {
// 	size_t	n;
// 	int		i;
// 	int		j;

// 	i = 1;
// 	while (i <= argc - 1)
// 	{
// 		j = i + 1;
// 		n = ft_strlen(argv[i]);
// 		while (argv[j])
// 		{
// 			if (n == ft_strlen(argv[j]))
// 				if(!ft_strncmp(argv[i], argv[j], n))
// 				{
// 					ft_putstr_fd("Error: invalid arguments is duplicated\n", 1);
// 					return(0);
// 				}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }
