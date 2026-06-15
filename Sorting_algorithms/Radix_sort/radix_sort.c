/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:23:11 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:53:19 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	int	bit_index;
	int	largest_index_bits;

	if (!stack_a || !stack_a->head || !stack_b || !ops)
		return ;
	ops->strategy = 3;
	if (stack_a->disorder == 0)
		return ;
	bit_index = 0;
	largest_index_bits = max_bits(stack_a->size);
	assign_index(stack_a);
	while (largest_index_bits--)
	{
		bit_set_sort(stack_a, stack_b, ops, bit_index);
		push_all_to_a(stack_a, stack_b, ops);
		bit_index++;
	}
}
