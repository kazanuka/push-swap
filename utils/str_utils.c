/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:21:28 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/30 17:52:46 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	int		i;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

void	ft_putendl_fd(char	*s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write (fd, s, 1);
		++s;
	}
	write (fd, "\n", 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		++s;
	}
}

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
