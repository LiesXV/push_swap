/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:00:11 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/02/06 15:09:49 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b, int argc)
{
	if (argc == 2)
		swap_a((*stack_a));
	else if (argc == 3)
		sort_three_nbr(stack_a);
	else if (argc == 4)
		sort_four_nbr(stack_a, stack_b);
	else if (argc == 5)
		sort_five_nbr(stack_a, stack_b);
	else if (argc > 5)
		radix(stack_a, stack_b, argc);
}

int	fill_index(t_list *lst, int content)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (content > lst->content)
			i++;
		lst = lst->next;
	}
	return (i);
}

int	init_index(t_list *lst)
{
	t_list	*cell;
	int		i;

	i = 0;
	cell = lst;
	while (cell)
	{
		cell->index = fill_index(lst, cell->content);
		cell = cell->next;
		i++;
	}
	return (i);
}

int	is_sorted(t_list *lst)
{
	while (lst)
	{
		if (lst->next != NULL && lst->index > lst->next->index)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	radix(t_list **stack_a, t_list **stack_b, int lstsize)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (is_sorted((*stack_a)) == 0)
	{
		j = 0;
		while (j < lstsize)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			j++;
		}
		i++;
		while ((*stack_b))
		{
			push_a(stack_a, stack_b);
		}
	}
}
