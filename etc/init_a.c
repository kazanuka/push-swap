/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:46:09 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/26 17:03:08 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void init_a(t_stack **stack,int argc, char **argv)
{
    t_stack *new;
    int i;

    i = 1;
    while (argv[i])
	{
		new = ft_lstnew(argv[i]);
		ft_lstadd_front(stack, new);
		i++;
	}
	indexer(stack);
}