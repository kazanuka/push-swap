/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:39:56 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/26 15:40:13 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_args(int argc, char **argv)
{
	int i;
	int tmp;

	i = 0;
	if(argc == 1)
		error(ARG_ERR);
	else if(argc == 2)
		argv = ft_split(argv[1],' ');
	else 
		i = 1;
	while(argv[i])
	{
		if(!is_int(argv[i]))
			error(INT_ERR);
		argv[i] = ft_atoi(argv[i]);
		tmp = argv[i];
		if(is_contains(tmp,argv,i))
			error(SAME_ERR);
		i++;
	}
}

static int is_int(long i)
{
	if(i >= INT_MIN && i <= INT_MAX)
		return (1);
	else
		return (0);
}

static int	is_contains(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}