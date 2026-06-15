/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 21:00:00 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/11 14:37:38 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void    test_chunk_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    ft_putstr("\n_____________________________________________________________\n");
    ft_putstr("-------------------->Chunk sort test<--------------------\n\n");

	if (stack_a->disorder == 0)
		return ;
    // Push all elements to stack b
    ft_putstr("\n______________PUSH ELEMENTS TO STACK 'B'______________\n");
    chunks_to_b(stack_a, stack_b, ops);
    ft_putstr("\nStack a values after chunks to 'b':\n\n");
	print_node_value(stack_a);
	ft_putstr("\nStack b values after chunks to 'b':\n\n");
	print_node_value(stack_b);    

    // Push all elements to stack b
    ft_putstr("\n______________PUSH ELEMENTS TO STACK 'A'______________\n");
    push_all_largest_to_a(stack_a, stack_b, ops);
    ft_putstr("\nStack a values after push all to 'a':\n\n");
	print_node_value(stack_a);
	ft_putstr("\nStack b values after push all to 'a':\n\n");
	print_node_value(stack_b);    
}