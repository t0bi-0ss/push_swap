/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:39:38 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:53:46 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Push node that contains stack_a minimum num found 
to stack_b given its position*/
void	push_min(t_stack *stack_a, t_stack *stack_b, int min_position,
		t_ops *ops)
{
	if (min_position <= stack_a->size / 2)
	{
		while (min_position > 0)
		{
			ra(stack_a, ops);
			min_position--;
		}
	}
	else
	{
		min_position = stack_a->size - min_position;
		while (min_position > 0)
		{
			rra(stack_a, ops);
			min_position--;
		}
	}
	pb(stack_b, stack_a, ops);
}
