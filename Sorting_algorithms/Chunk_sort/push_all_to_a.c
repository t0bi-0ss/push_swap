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

/*pushes all b's elements to a starting from largest to smallest*/
void	push_all_to_a(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	int	max_position;

	while (stack_b->size > 0)
	{
		max_position = look_for_max_position(stack_b, look_for_max(stack_b));
		push_max(stack_a, stack_b, max_position, ops);
	}
}