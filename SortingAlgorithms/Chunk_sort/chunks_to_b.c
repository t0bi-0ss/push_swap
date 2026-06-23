/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:03:46 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:00:18 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Push partially sorted chunks from a to b*/
void	chunks_to_b(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	int	index_range;
	int	chunks_size;

	if (!stack_a || !stack_a->head || !stack_b || !ops)
		return ;
	chunks_size = get_chunks_size(stack_a);
	index_range = chunks_size;
	assign_index(stack_a);
	while (stack_a->size > 0)
	{
		if (stack_a->head->index > index_range)
			ra(stack_a, ops);
		if (stack_a->head->index <= index_range)
		{
			pb(stack_b, stack_a, ops);
		}
		if (stack_b->size == index_range)
			index_range += chunks_size;
	}
}
