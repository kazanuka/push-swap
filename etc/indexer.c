/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:01:22 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/29 15:51:08 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_list	*get_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if (head->index == 0 && (min == NULL || head->nbr < min->nbr))//bunu sıfır yaptım
			{//ÖNEMLİ
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
	
	head = get_next_min(stack);
	//printf("%p",head);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}