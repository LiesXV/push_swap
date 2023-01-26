/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:53 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/26 13:35:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

void	ft_lstprint(t_list *lst);

int		is_array_good(char **nbr);

void	swap_a(t_list *lst);
void	swap_b(t_list *lst);
void	swap_s(t_list *a, t_list *b);

void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);

void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_r(t_list **a, t_list **b);

void	reverse_rotate_a(t_list **lst);
void	reverse_rotate_b(t_list **lst);
void	reverse_rotate_r(t_list **a, t_list **b);

int		init_index(t_list *lst);
int		is_sorted(t_list *lst);
void	radix(t_list **stack_a, t_list **stack_b, int lstsize);

#endif