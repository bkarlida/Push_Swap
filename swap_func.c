/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:49:33 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 11:58:52 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap_sort(t_list *stack)
{
	int	tmp;

	tmp = (stack)->sort_index[0];
	(stack)->sort_index[0] = (stack)->sort_index[1];
	(stack)->sort_index[1] = tmp;
}

void	swap_func(t_list *stack)
{
	int	tmp;

	tmp = stack->array[0];
	stack->array[0] = stack->array[1];
	stack->array[1] = tmp;
	find_highest(stack);
	swap_sort(stack);
}

void	ft_sa(t_list *stacka)
{
	swap_func(stacka);
	write(1, "sa\n", 3);
}

void	ft_sb(t_list *stackb)
{
	swap_func(stackb);
	write(1, "sb\n", 3);
}

void	ft_ss(t_list *stacka, t_list *stackb)
{
	swap_func(stacka);
	swap_func(stackb);
	write(1, "ss\n", 3);
}
