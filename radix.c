/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:53:55 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 12:02:09 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	is_sorted(t_list *stack)
{
	int	i;

	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->array[i] > stack->array[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	get_maxbit(t_list *stacka)
{
	int	maxbit;

	maxbit = 0;
	while (stacka->sort_index[stacka->index_highest] >> maxbit != 0)
		maxbit++;
	return (maxbit);
}

void	radix(t_list *stacka, t_list *stackb)
{
	int	maxbit;
	int	i;
	int	j;
	int	size;

	i = 0;
	size = stacka->size;
	maxbit = get_maxbit(stacka);
	while (i < maxbit)
	{
		j = 0;
		while (j < size)
		{
			if (((stacka->sort_index[0] >> i) & 1) == 1)
				ft_ra(stacka);
			else
				ft_pb(stacka, stackb);
			j++;
		}
		while (stackb->size != 0)
			ft_pa(stacka, stackb);
		i++;
	}
}
