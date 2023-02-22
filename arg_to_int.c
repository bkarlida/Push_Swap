/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:13:26 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 04:58:21 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	*str_atoi(int ac, char **av)
{
	int		i;
	char	*b;
	int		*new;
	char	**d;

	new = malloc(sizeof(int *) * endcounter(ac, av));
	b = endarg(ac, av);
	d = ft_split(b, ' ');
	free(b);
	i = -1;
	while (d[++i])
	{
		if (ft_atoi(d[i]) > 2147483647 || ft_atoi(d[i]) < -2147483648)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
	}
	i = -1;
	while (d[++i])
	{
		new[i] = ft_atoi(d[i]);
	}
	free_f(d);
	return (new);
}

char	*endarg(int ac, char **av)
{
	int		k;
	char	*c;
	char	**splt;
	int		i;

	k = 0;
	i = 1;
	c = malloc(sizeof(char *) * endcounter(ac, av));
	while (i != ac)
	{
		splt = ft_split(av[i++], ' ');
		while (splt[k])
		{
			c = ft_strjoin(c, splt[k]);
			c = ft_strjoin(c, " ");
			k++;
		}
		free_f(splt);
		k = 0;
	}
	return (c);
}

void	free_f(char **splt)
{
	int	i;

	i = 0;
	while (splt[i])
		free(splt[i++]);
	free(splt);
}
