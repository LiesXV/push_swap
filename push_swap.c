/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:10 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/26 13:56:05 by ibenhaim         ###   ########.fr       */
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
	int				size;
	t_list			*a;
	t_list			*b;

	i = 0;
	if (is_array_good(argv) == 0)
		return (ft_printf("les valeurs envoyées ne sont pas valides\n"), 0);
	size = argc - 1;
	b = NULL;
	while (i < size)
	{
		if (i == 0)
		{
			a = ft_lstnew(ft_atoi(argv[i + 1]));
			if (!a)
				return (0);
		}
		else
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i + 1])));
		i++;
	}
	size = init_index(a);
	radix (&a, &b, size);
}
