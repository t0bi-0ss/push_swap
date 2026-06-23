/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:34:12 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/19 19:27:08 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Push node that contains stack_b maximum num
found to stack_a given its position*/
void	push_max(t_stack *stack_a, t_stack *stack_b, int max_position,
		t_ops *ops)
{
	if (!stack_a || !stack_b || !ops || !stack_b->head)
		return ;
	if (max_position <= stack_b->size / 2)
	{
		while (max_position > 0)
		{
			rb(stack_b, ops);
			max_position--;
		}
	}
	else
	{
		max_position = stack_b->size - max_position;
		while (max_position > 0)
		{
			rrb(stack_b, ops);
			max_position--;
		}
	}
	pa(stack_a, stack_b, ops);
}
