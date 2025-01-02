/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 21:39:01 by fkuyumcu          #+#    #+#             */
/*   Updated: 2025/01/02 10:22:00 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	**split_free(char **array, size_t i)
{
	while (array[i] != NULL)
		free(array[i++]);
	free(array);
	return (NULL);
}

static int	counter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			i++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (i);
}

static char	*furky_alloc(const char *s, char c)
{
	char	*arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	arr = (char *)malloc(i + 1);
	if (arr == NULL)
		return (NULL);
	while (j < i)
	{
		arr[j] = s[j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		j;

	j = 0;
	array = (char **)malloc((counter(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			array[j] = furky_alloc(s, c);
			if (array[j] == NULL)
				return (split_free(array, 0));
			j++;
		}
		while (*s != c && *s != '\0')
			s++;
	}
	array[j] = NULL;
	return (array);
}
