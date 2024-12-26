/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 15:42:21 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/26 15:39:54 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	liberte(char **slave)
{
	int	i;

	i = 0;
	while (slave[i])
		free(slave[i++]);
	free(slave);
}

void error(char *error)
{
	ft_putstr_fd(error,1);
	exit(EXIT_FAILURE);
}

