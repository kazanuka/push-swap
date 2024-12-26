/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 15:42:21 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/26 17:31:14 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	liberte(char **slave)//free the stack
{
	t_stack	*head;
	t_stack	*tmp;

	head = *slave;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(slave);
}

void error(char *error)
{
	ft_putstr_fd(error,1);
	exit(EXIT_FAILURE);
}

