/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_minimum_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:45:18 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 22:48:55 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Gets the lists node with unasigned index and the minimum number found*/
t_list	*get_minimum_node(t_stack *stack_a)
{
	t_list *minimum_node;
	t_list *current_node;
	int min_value;

	min_value = look_for_max(stack_a);
	minimum_node = stack_a->head;
	if (minimum_node->num < min_value && minimum_node->index == 0)
		min_value = minimum_node->num;
	current_node = stack_a->head->next;
	while (current_node != stack_a->head)
	{
		if (current_node->num <= min_value && current_node->index == 0)
		{
			minimum_node = current_node;
			min_value = current_node->num;
		}
		current_node = current_node->next;
	}
	return (minimum_node);
}