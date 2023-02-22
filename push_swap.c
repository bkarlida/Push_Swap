/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:45:04 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/21 17:45:51 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	malloc_struct(t_list **arr, t_list **arr2, int ac, char **av)
{
	(*arr) = malloc(sizeof(t_list));
	(*arr)->size = endcounter(ac, av);
	(*arr2) = malloc(sizeof(t_list));
	(*arr2)->size = 0;
	(*arr2)->array = malloc(sizeof(int) * (*arr)->size);
	(*arr)->sort_index = malloc(sizeof(int) * (*arr)->size);
	(*arr2)->sort_index = malloc(sizeof(int) * (*arr)->size);
	(*arr)->array = str_atoi(ac, av);
}

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;

	malloc_struct(&stacka, &stackb, ac, av);
	negativecheck(av);
	pluscheck(av);
	samenumbercheck(stacka);
	if (stacka->size == 1)
		exit(0);
	if (is_sorted(stacka))
		exit(0);
	find_highest(stacka);
	if (stacka->size <= 3)
		sort_three(stacka);
	sort_index_zero(stacka);
	if (stacka->size > 3 && stacka->size < 6)
		sort_five(stacka, stackb);
	if (stacka->size > 5)
		radix(stacka, stackb);
}
