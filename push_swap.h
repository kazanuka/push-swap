/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:39:31 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/28 16:11:53 by fkuyumcu         ###   ########.fr       */
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
# define SORTED_ERR "Stack is already sorted."


void	error(char *error);
void	liberte(t_list **slave);
void	check_args(int argc, char **argv);
void	init_a(t_list **stack,int argc, char **argv);
void	indexer(t_list **stack);
void    sort(t_list **a, t_list **b);


int		is_sorted(t_list *stack);
void	free_ints(char **ints);
void	complex_sort(t_list **a, t_list **b);
void	simple_sort(t_list **a, t_list **b);

//---------------------------------------------------
int	pa(t_list **stack_a, t_list **stack_b);
int	pb(t_list **stack_a, t_list **stack_b);
//---------------------------------------------------
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
//---------------------------------------------------
int 	ra(t_list **a);
int 	rb(t_list **b);
int		rr(t_list **a, t_list **b);
//---------------------------------------------------
int		rra(t_list **a);
int		rrb(t_list **b);
int		rrr(t_list **a, t_list **b);
//---------------------------------------------------




#endif