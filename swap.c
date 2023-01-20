/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:22:07 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/20 14:43:22 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *lst)
{
	int	temp;

	lst = lst->next;
	temp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = temp;
}

void	swap_a(t_list *lst)
{
	swap(lst);
	ft_printf("sa\n");
}

void	swap_b(t_list *lst)
{
	swap(lst);
	ft_printf("sb\n");
}

void	swap_s(t_list *a, t_list *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}