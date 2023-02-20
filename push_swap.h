/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:53 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/02/20 11:41:20 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>

void	ft_lstprint(t_list *lst);

//					PARSING

char	**get_args(int argc, char **argv);
t_list	*fill_a(char **args, int size);
int		verif_args(char	**args, int size);
void	free_split(char **split);
int		check_duplicate(t_list *list);

//					SORTING

int		init_index(t_list *lst);
int		is_sorted(t_list *lst);
void	radix(t_list **stack_a, t_list **stack_b, int lstsize);
void	sort_three_nbr(t_list **list);
void	sort_four_nbr(t_list **list_a, t_list **list_b);
void	sort_five_nbr(t_list **list_a, t_list **list_b);
void	sort(t_list **stack_a, t_list **stack_b, int argc);

//					INSTRUCTIONS

void	swap_a(t_list *lst);
void	swap_b(t_list *lst);
void	swap_s(t_list *stack_a, t_list *stack_b);

void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);

void	rotate_a(t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	rotate_r(t_list **stack_a, t_list **stack_b);

void	reverse_rotate_a(t_list **lst);
void	reverse_rotate_b(t_list **lst);
void	reverse_rotate_r(t_list **stack_a, t_list **stack_b);

#endif