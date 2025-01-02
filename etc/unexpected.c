/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unexpected.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 15:42:21 by fkuyumcu          #+#    #+#             */
/*   Updated: 2025/01/02 11:58:41 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_free(t_list **slave)
{
	t_list	*head;
	t_list	*tmp;

	head = *slave;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(slave);
}

void	error(char *error)
{
	ft_putstr_fd(error, 2);
	exit(EXIT_FAILURE);
}
