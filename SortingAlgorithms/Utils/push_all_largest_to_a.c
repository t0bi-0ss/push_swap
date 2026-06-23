/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_largest_to_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:54:04 by ilbozhek          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:11 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*pushes all b's elements to a from largest to smallest number found*/
void	push_all_largest_to_a(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	int	max_position;

	while (stack_b->size > 0)
	{
		max_position = look_for_max_position(stack_b, look_for_max(stack_b));
		push_max(stack_a, stack_b, max_position, ops);
	}
}
