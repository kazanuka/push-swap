/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:24:27 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/30 15:01:36 by fkuyumcu         ###   ########.fr       */
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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	const char		*firstc;
	char			*address;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	firstc = &s[start];
	address = (char *)malloc(len + 1);
	if (address == NULL)
		return (NULL);
	ft_memcpy(address, firstc, len);
	address[len] = '\0';
	return (address);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *) src;
	q = (unsigned char *) dest;
	while (n--)
	{
		q[n] = p[n];
	}
	return (dest);
}
