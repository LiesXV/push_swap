/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:22:07 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/18 12:30:29 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	swap_a(t_list *lst)
// {
// 	int	temp;

// 	temp = tab->a[0];
// 	tab->a[0] = tab->a[1];
// 	tab->a[1] = temp;
// 	ft_printf("sa\n");
// }

void	swap_b(t_tab *tab)
{
	int	temp;

	temp = tab->b[0];
	tab->b[0] = tab->b[1];
	tab->b[1] = temp;
	ft_printf("sb\n");
}

void	swap_s(t_tab *tab)
{
	int	temp;

	temp = tab->a[0];
	tab->a[0] = tab->a[1];
	tab->a[1] = temp;
	temp = tab->b[0];
	tab->b[0] = tab->b[1];
	tab->b[1] = temp;
	ft_printf("ss\n");
}
