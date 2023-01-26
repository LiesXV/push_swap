/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:00:11 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/26 18:18:14 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int		content;
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		content = tmp->content;
		ft_printf("%d > %d ?\n", tmp->content, tmp->next->content);
		if (tmp->index > tmp->next->index)
		//	return (0);
			return (ft_printf("oui\n"), 0);
		ft_printf("non\n");
		tmp = tmp->next;
	}
	return (1);
}

void	radix(t_list **stack_a, t_list **stack_b, int lstsize)
{
	int		i;
	int		j;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = (*stack_a);
	tmp_b = (*stack_b);
	i = 1;
	j = 0;
	ft_printf("on entre dans la cle-bou\n");
	while (is_sorted((*stack_a)) == 0)
	{
		j = 0;
		while (j < lstsize)
		{
			ft_lstprint((*stack_a));
			if (((tmp_a->index >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			j++;
		}
		i *= 2;
	}
	ft_printf("on sort du issorted\n");
}
