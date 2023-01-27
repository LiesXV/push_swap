/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:12:42 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/27 11:56:32 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **from, t_list **to)
{
	t_list	*tmp;

	tmp = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = tmp;
}

void	push_a(t_list **a, t_list **b)
{
	push(b, a);
	// ft_lstprint(a);
	// ft_lstprint(b);
	ft_printf("pa\n");
}

void	push_b(t_list **a, t_list **b)
{
	push(a, b);
	// ft_lstprint(a);
	// ft_lstprint(b);
	ft_printf("pb\n");
}
