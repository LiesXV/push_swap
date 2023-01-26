/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:12:42 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/26 13:54:55 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = tmp;
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
