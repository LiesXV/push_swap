/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_four.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:09:34 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/02/09 11:55:04 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_smallest_pos(t_list **list_a)
{
	int			tmp;
	int			i;
	t_list		*list;

	list = *list_a;
	tmp = list->content;
	while (list)
	{
		if (tmp > list->content)
			tmp = list->content;
		list = list->next;
	}
	i = 0;
	list = *list_a;
	while (tmp != list->content)
	{
		i++;
		list = list->next;
	}
	return (i);
}

static void	push_smallest(t_list **list_a, t_list **list_b)
{
	int			smallest;
	int			i;

	i = 0;
	smallest = find_smallest_pos(list_a);
	if (smallest < 3)
	{
		while (i != smallest)
		{
			rotate_a(list_a);
			i++;
		}
	}
	else
	{
		while (i != ft_lstsize(*list_a) - smallest)
		{
			reverse_rotate_a(list_a);
			i++;
		}
	}
	push_b(list_a, list_b);
}

void	sort_five_nbr(t_list **list_a, t_list **list_b)
{
	push_smallest(list_a, list_b);
	push_smallest(list_a, list_b);
	sort_three_nbr(list_a);
	push_a(list_a, list_b);
	push_a(list_a, list_b);
}

void	sort_four_nbr(t_list **list_a, t_list **list_b)
{
	push_smallest(list_a, list_b);
	sort_three_nbr(list_a);
	push_a(list_a, list_b);
}
