/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:20:52 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 14:35:05 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	ft_add_front(t_stack *stack, t_list *new_node)
{
	if (!new_node || !stack)
		return (insert_node_fail(), 0);
	if (!(stack)->head)
	{
		stack->head = new_node;
		stack->tail = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		new_node->next = stack->head;
		new_node->prev = stack->head->prev;
		stack->head->prev = new_node;
		stack->tail->next = new_node;
		stack->head = new_node;
	}
	stack->size += 1;
	return (1);
}