/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:01:22 by fkuyumcu          #+#    #+#             */
/*   Updated: 2025/01/02 10:12:36 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_list	*next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if (head->index == 0 && (min == NULL || head->nbr < min->nbr))
			{
				min = head;
			}
			head = head->next;
		}
	}
	return (min);
}

void	indexer(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = next_min(stack);
	while (head)
	{
		head->index = index++;
		head = next_min(stack);
	}
}
