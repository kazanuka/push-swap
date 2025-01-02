/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:02:31 by fkuyumcu          #+#    #+#             */
/*   Updated: 2025/01/02 11:59:45 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	liberte(t_list **a, t_list **b)
{
	free(a);
	free(b);
	error("Error\n");
}

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;

	check_args(argc, argv);
	a = (t_list **)malloc(sizeof(t_list *));
	b = (t_list **)malloc(sizeof(t_list *));
	if (!a || !b)
		liberte(a, b);
	*a = NULL;
	*b = NULL;
	init_a(a, argc, argv);
	if (is_sorted(*a))
	{
		stack_free(a);
		stack_free(b);
		return (0);
	}
	sort(a, b);
	stack_free(a);
	stack_free(b);
}
