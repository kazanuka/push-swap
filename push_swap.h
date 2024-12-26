/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:39:31 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/12/26 17:16:24 by fkuyumcu         ###   ########.fr       */
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


typedef struct s_stack
{
	int				index;
	int				nbr;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	error(char *error);
void	liberte(char **slave);
void	check_args(int argc, char **argv);
void	init_a(t_stack **stack,int argc, char **argv);
void	indexer(t_stack **stack);
void    sort(t_stack **a, t_stack **b);


int		is_sorted(t_stack *head);



//---------------------------------------------------
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
//---------------------------------------------------
int		sa(t_stack **stack_a);
int		sb(t_stack **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
//---------------------------------------------------
int 	ra(t_stack **a);
int 	rb(t_stack **b);
int		rr(t_list **a, t_list **b);
//---------------------------------------------------
int		rra(t_list **a);
int		rrb(t_list **b);
int		rrr(t_list **a, t_list **b);
//---------------------------------------------------




#endif