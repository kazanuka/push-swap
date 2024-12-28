/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:14:44 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/28 16:09:36 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_list **a, t_list **b)
{
    if (ft_lstsize(*a) <= 5)
		simple_sort(a, b);
	else
		complex_sort(a,b);
}

static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}


void complex_sort(t_list **a, t_list **b)
{
	t_list *tmp_a;
	int bit;
	int j;
	int size;
	int max_bits;

	bit = 0;
	tmp_a = *a;
	size = ft_lstsize(tmp_a);
	while(bit < get_max_bits(a))
	{
		j = 0;
		while(j++<size)
		{
			tmp_a = *a;
			if (((tmp_a->index >> bit) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}		
		while (ft_lstsize(*b) != 0)
			pa(a, b);
		bit++;
	}
}
