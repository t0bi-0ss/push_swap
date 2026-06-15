/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_to_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 17:53:28 by ilbozhek          #+#    #+#             */
/*   Updated: 2026/06/14 17:53:39 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*pushes all a's elements to b starting from smallest to largest*/
void	push_all_to_b(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	int	min_position;

	while (stack_a->size > 0)
	{
		min_position = look_for_min_position(stack_a, look_for_min(stack_a));
		push_min(stack_a, stack_b, min_position, ops);
	}
}
