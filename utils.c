/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:12:55 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/16 14:04:29 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_array_good(char **nbr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nbr[i + 1])
	{
		if (nbr[i + 1][j] == '-')
			j++;
		while (nbr[i + 1][j])
		{
			if (nbr[i + 1][j] < '0' || nbr[i + 1][j] > '9')
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	print_tabs(t_tab *tab)
{
	int	i;

	i = tab->size;
	while (i >= 0)
	{
		ft_printf("%d | ", tab->a[i]);
		i--;
	}
	ft_printf("\n");
}
