/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:22:07 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/30 16:25:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *lst)
{
	int	temp;

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

void	swap_s(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
