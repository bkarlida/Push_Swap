/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:44:05 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 05:04:42 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotate_sort(t_list *stack)
{
	int	*tmp_arr;
	int	tmp;
	int	i;

	i = -1;
	tmp_arr = malloc(sizeof(int) * (stack)->size);
	while (++i < (stack)->size - 1)
		tmp_arr[i] = (stack)->sort_index[i + 1];
	tmp = (stack)->sort_index[0];
	free((stack)->sort_index);
	(stack)->sort_index = tmp_arr;
	(stack)->sort_index[(stack)->size - 1] = tmp;
}

void	rotate_func(t_list *stack)
{
	int	*tmp_arr;
	int	tmp;
	int	i;

	i = -1;
	tmp_arr = malloc(sizeof(int) * stack->size);
	while (++i < stack->size - 1)
		tmp_arr[i] = stack->array[i + 1];
	tmp = stack->array[0];
	free(stack->array);
	stack->array = tmp_arr;
	stack->array[stack->size - 1] = tmp;
	find_highest(stack);
	rotate_sort(stack);
}

void	ft_ra(t_list *stacka)
{
	rotate_func(stacka);
	write(1, "ra\n", 3);
}

void	ft_rb(t_list *stackb)
{
	rotate_func(stackb);
	write(1, "rb\n", 3);
}

void	ft_rr(t_list *stacka, t_list *stackb)
{
	rotate_func(stacka);
	rotate_func(stackb);
	write(1, "rr\n", 3);
}
