/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:09:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/05 12:38:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ps_isvalid_arg(int argc, char **argv)
{
	if (!isargc_enough(argc))
		return (0);
	if (isargv_empthy(argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	return (1);
}

static int	ps_isvalid_data(char **split)
{
	if (isargv_digit(split))
		return (0);
	if (argv_isoverflow(split))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*stk_a;
	t_list	*stk_b;
	t_data	*data;
	char	**split;

	if (!ps_isvalid_arg(argc, argv))
		return (0);
	else
		split = ps_argvtosplit(argc, argv);
	if (ps_isvalid_data(split))
		return (ps_freesplit(split));
	data = ft_calloc((size_t)argc, sizeof(t_data));
	stk_a = ps_getstk_a(split, data);
	ps_freesplit(split);
	stk_b = 0;
	if (isdata_duplicated(stk_a))
		return (ps_freestk(data, stk_a));
	ps_do_sort(&stk_a, &stk_b, ft_lstsize(stk_a));
	return (ps_freestk(data, stk_a));
}
