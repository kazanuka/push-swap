/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:26:39 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/30 14:45:10 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	push(t_list **src, t_list **dest)
{
	t_list	*tmp;
	t_list	*src_hd;
	t_list	*dest_hd;

	if (ft_lstsize(*src) == 0)
		return (-1);
	dest_hd = *dest;
	src_hd = *src;
	tmp = src_hd;
	src_hd = src_hd->next;
	*src = src_hd;
	if (!dest_hd)
	{
		dest_hd = tmp;
		dest_hd->next = NULL;
		*dest = dest_hd;
	}
	else
	{
		tmp->next = dest_hd;
		*dest = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
