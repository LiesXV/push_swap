/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:18:53 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/01/18 12:30:15 by ibenhaim         ###   ########.fr       */
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

// void	swap_a(t_tab *tab);
void	swap_b(t_tab *tab);
void	swap_s(t_tab *tab);

#endif