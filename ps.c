/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:02:31 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/31 22:43:03 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;

	a = (t_list **)malloc(sizeof(t_list *));
	b = (t_list **)malloc(sizeof(t_list *));
	if (!a || !b)
	{
		liberte(a);
		liberte(b);
		error("Error\n");
	}
	*a = NULL;
	*b = NULL;
	check_args(argc, argv, a, b);
	init_a(a, argc, argv);
	if (is_sorted(*a))
	{
		liberte(a);
		liberte(b);
		return (0);
	}
	sort(a, b);
	liberte(a);
	liberte(b);
}
