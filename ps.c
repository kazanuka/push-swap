/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:02:31 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/31 12:02:35 by fkuyumcu         ###   ########.fr       */
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
		error("Error\n");
	*a = NULL;
	*b = NULL;
	check_args(argc, argv);
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
