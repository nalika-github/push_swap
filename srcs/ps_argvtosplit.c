/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_argvtosplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:22:30 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/08 14:53:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ps_strsize(int argc, char **argv)
{
	int	i;
	int	j;
	size_t	size;

	i = 1;
	size = 0;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	return (size + (argc - 2));
}

static void	ps_fillstr(char *str, char **argv)
{
	int	i[3];

	i[0] = 1;
	i[2] = 0;
	while (argv[i[0]])
	{
		i[1] = 0;
		while (argv[i[0]][i[1]])
		{
			str[i[2]] = argv[i[0]][i[1]];
			i[2]++;
			i[1]++;
		}
		if (argv[i[0] + 1])
		{
			str[i[2]] = ' ';
			i[2]++;
		}
		i[0]++;
	}
}

char	**ps_argvtosplit(int argc, char **argv)
{
	char	*str;
	char	**split;

	str = ft_calloc(ps_strsize(argc, argv), sizeof(char));
	ps_fillstr(str, argv);
	split = ft_split(str, ' ');
	free(str);
	return (split);
}
