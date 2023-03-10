/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:18:23 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/30 13:18:23 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int argc, char **argv)
{
	int		i;
	char	**result;
	char	*join;
	char	*tmp;

	i = -1;
	join = "";
	tmp = "";
	while (++i < argc - 1)
	{
		if (i > 0)
			free(join);
		join = ft_strjoin(tmp, argv[i + 1]);
		if (!join)
			return (free(tmp), NULL);
		if (i > 0)
			free(tmp);
		tmp = ft_strjoin(join, " ");
		if (!tmp)
			return (free(join), NULL);
	}
	result = ft_split(tmp, ' ');
	if (!result)
		return (free(tmp), free(join), NULL);
	return (free(tmp), free(join), result);
}

int	check_duplicate(t_list *list)
{
	t_list		*tmp_list;
	int			tmp;

	while (list)
	{
		tmp = list->content;
		list = list->next;
		tmp_list = list;
		while (tmp_list)
		{
			if (tmp == tmp_list->content)
				return (0);
			tmp_list = tmp_list->next;
		}
	}
	return (1);
}

int	verif_args(char	**args, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (args[i][j])
		{
			if ((!ft_isdigit(args[i][j]) && args[i][j] != '-'
				&& args[i][j] != ' ') || (args[i][j] == '-'
					&& !ft_isdigit(args[i][j + 1])) || (args[i][j] == '-'
						&& (j != 0 && args[i][j - 1] != ' ')))
				return (0);
			j++;
		}
		if (ft_atoll(args[i]) > INT_MAX || ft_atoll(args[i]) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

t_list	*fill_a(char **args, int size)
{
	t_list	*stack_a;
	t_list	*cell;
	int		i;

	i = 0;
	while (i < size)
	{
		if (i == 0)
		{
			stack_a = ft_lstnew(ft_atoll(args[i]));
			if (!stack_a)
				return (ft_lstclear(&stack_a), NULL);
		}
		else
		{
			cell = ft_lstnew(ft_atoll(args[i]));
			if (!cell)
				return (ft_lstclear(&stack_a), NULL);
			ft_lstadd_back(&stack_a, cell);
		}
		i++;
	}
	return (stack_a);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
