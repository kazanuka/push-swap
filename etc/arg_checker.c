/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:39:56 by fkuyumcu          #+#    #+#             */
/*   Updated: 2025/01/02 10:24:28 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	**prepare_args(int argc, char **argv)
{
	char	**args;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (args == NULL)
		{
			free_ints(args);
			error("Error\n");
		}
	}
	else
	{
		args = argv;
	}
	return (args);
}

static void	validate_args(char **args, int argc)
{
	int		i;
	long	tmp;

	if (argc == 2)
		i = 0;
	else
		i = 1;
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!ft_isnum(args[i]) || ft_contains(tmp, args, i)
			|| (tmp < -2147483648 || tmp > 2147483647))
		{
			if (argc == 2)
				free_ints(args);
			error("Error\n");
		}
		i++;
	}
	if (argc == 2)
		free_ints(args);
}

void	check_args(int argc, char **argv)
{
	char	**args;

	args = prepare_args(argc, argv);
	validate_args(args, argc);
}
