/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:13:27 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/29 12:46:11 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new ;
		return ;
	}
	new->next = head;
	*lst = new;
}
