/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:10 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/18 12:29:42 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstprint(t_list *lst)
{
	lst = lst->next;
	while (lst)
	{
		ft_printf("%d \n", lst->content);
		lst = lst->next;
	}
}

int	main(int argc, char **argv)
{
	t_tab	tab;
	int		i;
	t_list	*a;

	i = 0;
	if (is_array_good(argv) == 0)
		return (ft_printf("les valeurs envoyées ne sont pas valides\n"), 0);
	tab.size = argc - 1;
	a = calloc(sizeof(t_list), tab.size);
	if (!a)
		return (0);
	while (i < tab.size)
	{
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i + 1])));
		i++;
	}
	ft_lstprint(a);
	return (1);
}
