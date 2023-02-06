/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:43:36 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/02/06 12:54:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_nbr(t_list **list)
{
	t_list	*list_a;

	list_a = *list;
	if (list_a->content > list_a->next->next->content && \
		list_a->next->next->content > list_a->next->content)
		rotate_a(&list_a);
	if (list_a->content > list_a->next->content && \
		list_a->next->content > list_a->next->next->content)
		swap_a(list_a);
	if (list_a->content > list_a->next->content)
		swap_a(list_a);
	else if (list_a->content > list_a->next->next->content)
		reverse_rotate_a(&list_a);
	else if (list_a->next->content > list_a->next->next->content)
	{
		swap_a(list_a);
		rotate_a(&list_a);
	}
	if (list_a->next->content > list_a->next->next->content)
	{
		rotate_a(&list_a);
		swap_a(list_a);
		reverse_rotate_a(&list_a);
	}
}
