/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:39:31 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/26 15:36:13 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdbool.h>
# include <limits.h> 

# define ARG_ERR "Bad Arguments"
# define INT_ERR "Number isn't integer"
# define SAME_ERR "There are same numbers in stack"



typedef struct s_stack
{
	int				index;
	int				nbr;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	error(char *error);
void	liberte(char **slave);

int	rra(t_list **a);




#endif