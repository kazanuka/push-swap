/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:17 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/29 12:46:39 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*adress;

	adress = malloc(ft_strlen(s1)+1);
	if (adress == NULL)
		return (NULL);
	ft_memcpy(adress, s1, ft_strlen(s1) + 1);
	return (adress);
}
