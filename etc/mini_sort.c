/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:23:15 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/30 13:47:40 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_3(t_list **stack_a)
{
	t_list	*node;

	node = *stack_a;
	if (is_sorted(*stack_a))
		return ;
	if (min_node(stack_a) == ft_lstlast(*stack_a))
	{
		if (node->index > node->next->index)
		{
			sa(stack_a);
			rra(stack_a);
		}
		else
			rra(stack_a);
	}
	else if (node->next->index > node->index)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (ft_lstlast(*stack_a)->index > node->index)
		sa(stack_a);
	else
		ra(stack_a);
}

static void	sort_4(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a))
		return ;
	position(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

static void	sort_5(t_list **stack_a, t_list **stack_b)
{
	position(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	position(t_list **stack_a, t_list **stack_b)
{
	t_list	*node;

	node = *stack_a;
	if (min_node(stack_a) == ft_lstlast(*stack_a))
		rra(stack_a);
	else
	{
		while (min_node(stack_a) != node)
		{
			ra(stack_a);
			node = *stack_a;
		}
	}
	pb(stack_a, stack_b);
}

t_list	*min_node(t_list **stack)
{
	t_list	*tmp;
	t_list	*min;

	if (!stack || !*stack)
		return (NULL);
	min = *stack;
	tmp = min->next;
	while (tmp != NULL)
	{
		if (tmp->index < min->index)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}


void simple_sort(t_list **a, t_list **b)
{
	if(is_sorted(*a) || (ft_lstsize(*a) < 2))
		return ;
    if(ft_lstsize(*a) == 2)
        ra(a);
    else if(ft_lstsize(*a) == 3)
        sort_3(a);
    else if (ft_lstsize(*a) == 4)
        sort_4(a,b);
    else if(ft_lstsize(*a) == 5)
        sort_5(a,b);
}

