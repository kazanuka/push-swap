/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:44:59 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/31 11:56:43 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n && s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		++count;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = (n / 10);
		++count;
	}
	return (count);
}

static char	*ft_itoa(int n)
{
	char	*address;
	int		count;

	count = ft_count_digits(n);
	address = malloc(sizeof(char) * (count + 1));
	if (NULL == address)
		return (NULL);
	address[count] = '\0';
	if (n == 0)
		address[0] = '0';
	else if (n < 0)
		address[0] = '-';
	while (n)
	{
		if (n < 0)
			address[--count] = (~(n % 10) + 1) + 48;
		else
			address[--count] = (n % 10) + 48;
		n = (n / 10);
	}
	return (address);
}

int		atoi_check(char *string)
{
    int tmp;
    char *tmp2;
    
    tmp = ft_atoi(string);
    tmp2 = ft_itoa(tmp);
    if (tmp2 == NULL)
        error("Error\n");        
    if(ft_strncmp(string,tmp2,ft_strlen(string)) == 0)
    {
        free(tmp2);
        return (1);
    }
    free(tmp2);
    return (0);

    
} 