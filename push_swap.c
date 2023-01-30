/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:10 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/30 11:29:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		ft_printf(" %d /", lst->content);
		//ft_printf("\n");
		lst = lst->next;
	}
	ft_printf("\n");
}

char	**get_args(int argc, char **argv)
{
	int		i;
	char	**result;
	char	*join;

	i = 0;
	join = ft_calloc(1, sizeof(char));
	if (!join)
		return (NULL);
	while (i < argc - 1)
	{
		join = ft_strjoin(join, argv[i + 1]);
		if (!join)
			return (NULL);
		join = ft_strjoin(join, " ");
		if (!join)
			return (NULL);
		i++;
	}
	//ft_printf("join : %s\n", join);
	result = ft_split(join, ' ');
	if (!result)
		return (free(join), NULL);
	return (free(join), result);
}

t_list	*fill_a(char **args, int size)
{
	t_list	*stack_a;
	int		i;

	i = 0;
	while (i < size)
	{
		if (i == 0)
		{
			stack_a = ft_lstnew(ft_atoi(args[i]));
			if (!stack_a)
				return (0);
		}
		else
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(args[i])));
		i++;
	}
	return (stack_a);
}

int	main(int argc, char **argv)
{
	int				i;
	t_list			*a;
	t_list			*b;
	char			**split;

	i = 0;
	a = NULL;
	b = NULL;
	split = get_args(argc, argv);
	while (split[i])
	{
		i++;
	}
	a = fill_a(split, i);
	i = init_index(a);
	radix (&a, &b, i);
	//ft_lstprint(a);
}
