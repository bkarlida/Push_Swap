/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:59:35 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 05:00:19 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push_sort(t_list *stacka, t_list *stackb)
{
	int	i;

	stackb->sort_index[0] = stacka->sort_index[0];
	i = -1;
	while (++i < stacka->size)
		stacka->sort_index[i] = stacka->sort_index[i + 1];
}

void	push_func(t_list *stacka, t_list *stackb)
{
	int	i;

	stackb->size++;
	reverse_rotate_func(stackb);
	stackb->array[0] = stacka->array[0];
	i = -1;
	while (++i < stacka->size)
		stacka->array[i] = stacka->array[i + 1];
	stacka->size--;
	find_highest(stacka);
	find_highest(stackb);
	push_sort(stacka, stackb);
}

void	ft_pa(t_list *stacka, t_list *stackb)
{
	push_func(stackb, stacka);
	write(1, "pa\n", 3);
}

void	ft_pb(t_list *stacka, t_list *stackb)
{
	push_func(stacka, stackb);
	write(1, "pb\n", 3);
}
