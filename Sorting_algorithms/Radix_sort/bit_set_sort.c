/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_set_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:23:29 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/09 19:48:21 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	bit_set_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops, int index)
{
	int	size;

	if (!stack_a || !stack_a->head || !stack_b || !ops)
		return ;
	size = stack_a->size;
	while (size)
	{
		if ((stack_a->head->index & (1 << index)))
			ra(stack_a, ops);
		else
			pb(stack_b, stack_a, ops);
		size--;
	}
}
