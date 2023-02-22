/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:57:06 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 12:08:54 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int	*array;
	int	size;
	int	max_index;
	int	max_number;
	int	index_highest;
	int	*sort_index;

}t_list;

char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
void	push_sort(t_list *stacka, t_list *stackb);
void	push_func(t_list *stacka, t_list *stackb);
void	ft_pa(t_list *stacka, t_list *stackb);
void	ft_pb(t_list *stacka, t_list *stackb);
void	ft_rrr(t_list *stacka, t_list *stackb);
void	ft_rrb(t_list *stack_b);
void	ft_rra(t_list *stack_a);
void	reverse_rotate_func(t_list *stack);
void	reverse_rotate_sort(t_list *stack);
void	ft_rr(t_list *stacka, t_list *stackb);
void	ft_rb(t_list *stackb);
void	ft_ra(t_list *stacka);
void	rotate_func(t_list *stack);
void	rotate_sort(t_list *stack);
void	ft_ss(t_list *stacka, t_list *stackb);
void	ft_sb(t_list *stackb);
void	ft_sa(t_list *stacka);
void	swap_func(t_list *stack);
void	swap_sort(t_list *stack);
int		count(char *s, char c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*endarg(int ac, char **av);
int		endcounter(int ac, char **av);
void	malloc_struct(t_list **arr, t_list **arr2, int ac, char **av);
void	negativecheck(char **av);
void	pluscheck(char **av);
void	samenumbercheck(t_list *stacka);
void	sort_three(t_list *stack);
int		*str_atoi(int ac, char **av);
int		is_sorted(t_list *stack);
void	radix(t_list *stacka, t_list *stackb);
int		get_maxbit(t_list *stacka);
void	sort_index_zero(t_list *stacka);
void	sort_index(t_list *stacka);
void	sort_control(t_list *stacka, int i, int j, int size);
void	sort_five(t_list *stacka, t_list *stackb);
void	find_highest(t_list *stack);
void	free_f(char **splt);
void	ft_add_check(char **av, int k, int i, int j);

#endif