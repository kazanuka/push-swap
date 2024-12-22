/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:41:25 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/22 15:43:46 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"





int main(int argc, char **argv)
{
	if(argc == 1)
	{
		ft_putstr_fd("Error",1);
		return (1);
	}
	else 
	{
		char *strings;
		char **nums;
		int i;
		i = 1;
		while(i < argc)
		{
			if(argv[i + 1])
				strings = ft_strjoin(argv[i],argv[i + 1]);
			i++;
		}
		nums = ft_split(strings,' ');
		
	}
	
	
    
}