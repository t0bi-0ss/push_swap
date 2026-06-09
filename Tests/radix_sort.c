/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:49:10 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/09 20:33:48 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void    test_radix_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    ft_putstr("\n_____________________________________________________________\n");
    ft_putstr("-------------------->Radix sort test<--------------------\n\n");

	// Radix sort
	radix_sort(stack_a, stack_b, ops);
    // Push all elements to stack b
    ft_putstr("\n______________STACK 'A' ELEMENTS AFTER SORT______________\n");
    
	
	print_node_value(stack_a);
}