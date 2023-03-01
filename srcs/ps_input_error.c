/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_input_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:22:30 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/21 14:52:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	argc_iscollect(int argc)
{
	if (argc < 2)
	{
		ft_putstr_fd("Error: invalid arguments less than 1\n", 1);
		return (0);
	}
	return (1);
}

static int	argv_isint(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		if (ft_issign(argv[i][0]) && argv[i][1])
			j++;
		while(argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '\0')
			{
				ft_putstr_fd("Error: invalid arguments not int.\n", 1);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ps_input_error(int argc, char **argv)
{
	if (!argc_iscollect(argc))
		return (1);
	if (!argv_isint(argv))
		return (1);
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
