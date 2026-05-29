/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:24:30 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/29 18:55:23 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	ft_insert_new_node(t_stack *stack, t_list *new_node)
{
	t_list	*tmp_head;
	t_list	*tmp_prev;

	if (!new_node || !stack)
		return (insert_node_fail(), 0);
	tmp_head = NULL;
	tmp_prev = NULL;
	if (!(stack)->head)
	{
		stack->head = new_node;
		stack->tail = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		new_node->prev = stack->tail;
		new_node->next = stack->head;
		stack->tail->next = new_node;
		stack->head->prev = new_node;
		stack->tail = new_node;
	}
	stack->size += 1;
	return (1);
}
