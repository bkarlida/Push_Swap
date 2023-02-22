/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarlida <bkarlida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 02:35:54 by bkarlida          #+#    #+#             */
/*   Updated: 2023/02/20 05:03:30 by bkarlida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	count(char *s, char c)
{
	int	i;
	int	count;
	int	flag;

	flag = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 0;
		else if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	endcounter(int ac, char **av)
{
	int	k;
	int	c;

	k = 0;
	c = 0;
	while (k++ != (ac - 1))
		c += count(av[k], ' ');
	return (c);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*nstr;
	size_t	i;
	size_t	k;
	size_t	j;
	size_t	len;

	len = (ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	k = 0;
	j = 0;
	nstr = (char *)malloc(sizeof(char) * (len + 1));
	if (nstr == NULL)
		return (0);
	while (s1[i])
		nstr[i++] = s1[j++];
	while (s2[k])
		nstr[i++] = s2[k++];
	nstr[i] = '\0';
	free(s1);
	return (nstr);
}

void	find_highest(t_list *stack)
{
	int	i;
	int	highest;

	i = 0;
	highest = stack->array[0];
	stack->index_highest = 0;
	while (++i < stack->size)
	{
		if (highest < stack->array[i])
		{
			highest = stack->array[i];
			stack->index_highest = i;
		}
	}
}
