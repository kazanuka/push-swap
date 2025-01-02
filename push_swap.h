/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:39:31 by fkuyumcu          #+#    #+#             */
/*   Updated: 2025/01/02 10:19:22 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				nbr;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

void	error(char *error);
void	liberte(t_list **slave);
void	check_args(int argc, char **argv, t_list **a, t_list **b);
void	init_a(t_list **stack, int argc, char **argv);
void	indexer(t_list **stack);
void	sort(t_list **a, t_list **b);
int		get_max_bits(t_list **stack);

int		is_sorted(t_list *stack);
void	free_ints(char **ints);
void	complex_sort(t_list **a, t_list **b);
void	simple_sort(t_list **a, t_list **b);
void	position(t_list **stack_a, t_list **stack_b);
t_list	*min_node(t_list **stack);
int		ft_isnum(char *num);
int		ft_contains(int num, char **argv, int i);

long	ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putendl_fd(char	*s, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(const char *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
t_list	*ft_lstnew(int content);

int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
int		sa(t_list **stack_a);
int		ra(t_list **a);
int		rra(t_list **a);

#endif