/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:22:15 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 19:58:18 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	push_all_to_b(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	int	min_position;

	
	while (stack_a->size > 0)
	{
		min_position = look_for_min_position(stack_a, look_for_min(stack_a));
		push_min(stack_b, stack_a, min_position);
		ops->pb += 1;
		ops->total_operations += 1;
	}
}