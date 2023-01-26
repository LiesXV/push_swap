/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:42:49 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/25 14:06:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_lstblast(t_list *lst)
{
	while (lst->next->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	reverse_rotate(t_list **lst)
{
	t_list	*tail;
	t_list	*tmp;
	t_list	*blast;

	tail = ft_lstlast(*lst);
	blast = ft_lstblast(*lst);
	tmp = *lst;
	*lst = tail;
	(*lst)->next = tmp;
	blast->next = NULL;
}

void	reverse_rotate_a(t_list **lst)
{
	reverse_rotate(lst);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_list **lst)
{
	reverse_rotate(lst);
	ft_printf("rrb\n");
}

void	reverse_rotate_r(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
