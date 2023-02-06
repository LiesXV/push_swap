/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:43:36 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/02/06 15:13:41 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_nbr(t_list **list)
{
	if ((*list)->content > (*list)->next->next->content && \
		(*list)->next->next->content > (*list)->next->content)
		rotate_a(list);
	if ((*list)->content > (*list)->next->content && \
		(*list)->next->content > (*list)->next->next->content)
		swap_a((*list));
	if ((*list)->content > (*list)->next->content)
		swap_a((*list));
	else if ((*list)->content > (*list)->next->next->content)
		reverse_rotate_a(list);
	else if ((*list)->next->content > (*list)->next->next->content)
	{
		swap_a((*list));
		rotate_a(list);
	}
	if ((*list)->next->content > (*list)->next->next->content)
	{
		rotate_a(list);
		swap_a((*list));
		reverse_rotate_a(list);
	}
}
