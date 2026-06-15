/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   still_bit_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 20:13:48 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:53:22 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

int	still_bit_zero(t_stack *stack_a, int bit_index)
{
	int		counter;
	int		iterations;
	t_list	*current_node;

	if (!stack_a || !stack_a->head)
		return (0);
	counter = 0;
	iterations = stack_a->size;
	current_node = stack_a->head;
	while (iterations)
	{
		if (current_node->index & (1 << bit_index))
			counter++;
		current_node = current_node->next;
		iterations--;
	}
	if (counter == stack_a->size)
		return (0);
	return (1);
}
