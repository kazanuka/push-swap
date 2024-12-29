/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:09 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/29 12:46:35 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_tokens(char const *s, char c)
{
	char	*q;
	int		count;

	q = (char *)s;
	count = 0;
	while (*q)
	{
		if (*q == c)
			q++;
		else
		{
			count++;
			while (*q && *q != c)
				q++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**str_arr;
	int			i;
	int			j;
	int			count;

	if (!s)
		return (0);
	count = count_tokens(s, c);
	str_arr = malloc(sizeof(char *) * (count + 1));
	if (!str_arr)
		return (0);
	i = -1;
	j = 0;
	while (++i < count)
	{
		while (*s == c)
			s++;
		j = 0;
		while (*(s + j) != c && *(s + j))
			j++;
		*(str_arr + i) = ft_substr(s, 0, j);
		s += j;
	}
	*(str_arr + i) = 0;
	return (str_arr);
}
