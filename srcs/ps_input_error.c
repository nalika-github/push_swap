/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_input_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:22:30 by ptungbun          #+#    #+#             */
/*   Updated: 2023/03/21 21:04:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	argc_iscollect(int argc)
{
	if (argc < 2)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	return (1);
}

static int	argv_isint(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (ft_issign(argv[i][0]) && argv[i][1])
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '\0')
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

static int	argv_isover(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) != ft_atol(argv[i]))
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		i++;
	}
	return (0);
}

int	isarg_empthy(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][0] == '\0')
			return (1);
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ps_input_error(int argc, char **argv)
{
	if (isarg_empthy(argv))
		return (1);
	if (!argc_iscollect(argc))
		return (1);
	if (!argv_isint(argv))
		return (1);
	if (argv_isover(argv))
		return (1);
	return (0);
}
