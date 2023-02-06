/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:10 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/02/06 12:52:57 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		ft_printf(" %d /", lst->content);
		lst = lst->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	int				i;
	t_list			*stack_a;
	t_list			*stack_b;
	char			**split;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	split = get_args(argc, argv);
	if (!split)
		return (free_split(split), ft_putstr_fd("Error\n", 2), 0);
	while (split[i])
		i++;
	if (verif_args(split, i) == 0)
		return (ft_putstr_fd("Error\n", 2), 0);
	stack_a = fill_a(split, i);
	free_split(split);
	i = init_index(stack_a);
	if (!is_sorted(stack_a))
		sort(&stack_a, &stack_b, i);
	ft_lstclear(&stack_a);
}
