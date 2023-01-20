/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:23:16 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/20 15:36:45 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*tail;

	tmp = *lst;
	*lst = (*lst)->next;
	tail = ft_lstlast(*lst);
	tmp->next = NULL;
	tail->next = tmp;
}

void	rotate_a(t_list **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rotate_b(t_list **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rotate_r(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
