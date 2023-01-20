/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:10 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/20 15:41:44 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d | ", lst->content);
		lst = lst->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_tab			tab;
	int				i;
	t_list			*a;
	t_list			*b;

	i = 0;
	if (is_array_good(argv) == 0)
		return (ft_printf("les valeurs envoyées ne sont pas valides\n"), 0);
	tab.size = argc - 1;
	a = malloc(sizeof(t_list));
	if (!a)
		return (0);
	b = NULL;
	while (i < tab.size)
	{
		if (i == 0)
			a = ft_lstnew(ft_atoi(argv[i + 1]));
		else
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i + 1])));
		i++;
	}
	ft_lstprint(a);
	ft_lstprint(b);
	push_a(&a, &b);
	push_a(&a, &b);
	push_a(&a, &b);
	rotate_a(&a);
	rotate_b(&b);
	rotate_r(&a, &b);
	ft_lstprint(a);
	ft_lstprint(b);
	return (1);
}
