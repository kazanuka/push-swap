/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:41:25 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/22 16:12:22 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"




int main(int argc, char **argv)
{
	if(argc == 1)
		error(ARG_ERR);
		
	else if (argc == 2) 
	{
		//Sayılar string halinde verilmiş
		argv = ft_split(argv[1],' ');
		
	}
	else 
	{
		//Sayılar ayrı ayrı argüman halinde verilirse
		 
	}
	
	
    
}