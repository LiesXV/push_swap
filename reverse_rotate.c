/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:42:49 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/30 14:29:13 by marvin           ###   ########.fr       */
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

void	reverse_rotate_r(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
