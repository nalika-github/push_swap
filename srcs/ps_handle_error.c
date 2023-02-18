/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_handle_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:22:30 by ptungbun          #+#    #+#             */
/*   Updated: 2023/02/15 16:42:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	argc_iscollect(int argc)
{
	if (argc < 2)
	{
		ft_putstr_fd("Error: invalid arguments less than 2\n", 1);
		return (1);
	}
	return (0);
}

static int	argv_isdigi(argv)
{
	int	i;
	int	j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		if (is_sign(argv[i][0]) && argv[i][1])
			j++;
		while(argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '\0')
			{
				ft_putstr_fd("Error: invalid arguments non-digit.\n", 1);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

static int	argv_iszero()
{
	int	i;
	int	j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		if (is_sign(argv[i][0]) && argv[i][1])
			j++;
		while(argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '\0')
			{
				ft_putstr_fd("Error: invalid zero input.\n", 1);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

static int	argv_isduplicated(int argc, char **argv)
{
	size_t	n;
	int		i;
	int		j;

	i = 1;
	while (i <= argc - 1)
	{
		j = i + 1;
		n = ft_strlen(argv[i]);
		while (argv[j])
		{
			if (n == ft_strlen(argv[j]))
				if(!ft_strncmp(argv[i], argv[j], n));
				{
					ft_putstr_fd("Error: invalid arguments is duplicated\n", 1);
					return(1)
				}
			j++;
		}
		i++;
	}
	return (0);
}

int	ps_handle_error(int argc, char **argv)
{
	if (!argc_iscollect(argc))
		return (1);
	if (!argv_isdigi(argv))
		return (1);
	if (!argv_iszero(argv))
		return (1);
	if (!argv_isduplicated(argv))
		return (1);
	return (0);
}
