/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:18:41 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 04:56:03 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_add_check(char **av, int k, int i, int j)
{
	if (!(av[k][j] >= '0' && av[k][j] <= '9'))
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if (av[k][i - 1] != ' ')
	{
		if (!(av[k][0] == '-' || av[k][0] == '+'))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
	}
}

void	negativecheck(char **av)
{
	int	k;
	int	i;
	int	j;

	k = 1;
	while (av[k])
	{
		i = 0;
		while (av[k][i])
		{
			if ((av[k][i] == '-') || (av[k][i] == '+'))
			{
				j = i + 1;
				ft_add_check(av, k, i, j);
			}
			j = 0;
			i++;
		}
		k++;
	}
}

void	pluscheck(char **av)
{
	int	k;
	int	i;

	k = 1;
	while (av[k])
	{
		i = 0;
		while (av[k][i])
		{
			if (!(av[k][i] >= '0' && av[k][i] <= '9'))
			{
				if (av[k][i] != ' ' && av[k][i] != '-' && av[k][i] != '+')
				{
					write(2, "Error\n", 6);
					exit(0);
				}
			}
			i++;
		}
		k++;
	}
}

void	samenumbercheck(t_list *stacka)
{
	int	k;
	int	i;

	k = 0;
	while (k < stacka->size)
	{
		i = k + 1;
		while (i < stacka->size)
		{
			if (stacka->array[k] == stacka->array[i])
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			i++;
		}
		k++;
	}
}
