/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:32:50 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/26 16:54:40 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int ra(t_stack **a)
{
    if (rotate(a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);

}

int rb(t_stack **b)
{
    if (rotate(b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list **a, t_list **b)
{
	if ((ft_lstsize(*a) < 2) || (ft_lstsize(*b) < 2))
		return (-1);
	rotate(a);
	rotate(b);
	ft_putendl_fd("rr", 1);
	return (0);
}


