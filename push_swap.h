/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:53 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/20 15:37:04 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_tab {
	int	*a;
	int	*b;
	int	size;
}		t_tab;

int		is_array_good(char **nbr);
void	print_tabs(t_tab *tab);

void	swap_a(t_list *lst);
void	swap_b(t_list *lst);
void	swap_s(t_list *a, t_list *b);

void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);

void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_r(t_list **a, t_list **b);

#endif