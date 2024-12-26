/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:14:44 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/26 19:42:16 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack **a, t_stack **b)
{
    if (ft_lstsize(*a) <= 5)
		simple_sort(a, b);
	else
		complex_sort(a,b);
}

static void simple_sort(t_stack **a, t_stack **b)
{

}

static void complex_sort(t_stack **a, t_stack **b)
{

    
}