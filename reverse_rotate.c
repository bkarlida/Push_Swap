/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:36:14 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 05:04:25 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	reverse_rotate_sort(t_list *stack)
{
	int	*tmp_arr;
	int	i;

	tmp_arr = malloc(sizeof(int) * stack->size);
	tmp_arr[0] = stack->sort_index[stack->size - 1];
	i = 0;
	while (++i < stack->size)
		tmp_arr[i] = stack->sort_index[i - 1];
	free(stack->sort_index);
	stack->sort_index = tmp_arr;
}

void	reverse_rotate_func(t_list *stack)
{
	int	*tmp_arr;
	int	i;

	tmp_arr = malloc(sizeof(int) * stack->size);
	tmp_arr[0] = stack->array[stack->size - 1];
	i = 0;
	while (++i < stack->size)
		tmp_arr[i] = stack->array[i - 1];
	free(stack->array);
	stack->array = tmp_arr;
	find_highest(stack);
	reverse_rotate_sort(stack);
}

void	ft_rra(t_list *stack_a)
{
	reverse_rotate_func(stack_a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_list *stack_b)
{
	reverse_rotate_func(stack_b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_list *stacka, t_list *stackb)
{
	reverse_rotate_func(stacka);
	reverse_rotate_func(stackb);
	write(1, "rrr\n", 4);
}
