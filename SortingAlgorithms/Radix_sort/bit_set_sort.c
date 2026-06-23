/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_set_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:23:29 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/17 18:49:22 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	bit_set_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops,
		int bit_index)
{
	int	size;

	if (!stack_a || !stack_a->head || !stack_b || !ops)
		return ;
	size = stack_a->size;
	while (size)
	{
		if ((stack_a->head->index & (1 << bit_index)))
			ra(stack_a, ops);
		else
			pb(stack_b, stack_a, ops);
		size--;
	}
}
