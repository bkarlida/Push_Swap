/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:55:34 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/21 17:41:04 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_three(t_list *stack)
{
	if (stack->index_highest == 0)
		ft_ra(stack);
	else if (stack->index_highest == 1)
		ft_rra(stack);
	if (stack->array[0] > stack->array[1])
		ft_sa(stack);
}

void	sort_control(t_list *stacka, int i, int j, int size)
{
	while (j < size)
	{
		if (stacka->sort_index[i] == stacka->sort_index[j])
		{
			if (stacka->array[i] > stacka->array[j])
			{
				stacka->sort_index[i] += 1;
				break ;
			}
			else if (stacka->array[i] < stacka->array[j])
			{
				stacka->sort_index[j] += 1;
				break ;
			}
		}
		j++;
	}
}

void	sort_index(t_list *stacka)
{
	int	i;
	int	j;
	int	size;

	size = stacka->size;
	i = 0;
	while (stacka->sort_index[i] != size - 1)
	{
		j = i + 1;
		sort_control(stacka, i, j, size);
		i++;
		if (i >= size)
			i = 0;
	}
}

void	sort_index_zero(t_list *stacka)
{
	int	i;

	i = -1;
	while (++i < stacka->size)
	{
		stacka->sort_index[i] = 0;
	}
	sort_index(stacka);
}

void	sort_five(t_list *stacka, t_list *stackb)
{
	int	i;

	i = -1;
	while (++i < 2)
	{
		if (stacka->index_highest <= stacka->size / 2)
			while (stacka->index_highest)
				ft_ra(stacka);
		else
			while (stacka->index_highest)
				ft_rra(stacka);
		ft_pb(stacka, stackb);
	}
	sort_three(stacka);
	i = -1;
	while (++i < 2)
	{
		ft_pa(stackb, stacka);
		ft_ra(stacka);
	}
}
