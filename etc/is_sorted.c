/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:01:32 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/28 14:07:32 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_sorted(t_list *stack)
{
    t_list	*head;

	head = stack;
	while (head && head->next)
	{
		if (head->nbr > head->next->nbr)
			return (0);
		head = head->next;
	}
	return (1);
}