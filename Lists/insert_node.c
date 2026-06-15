/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:24:30 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:17 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	ft_add_back(t_stack *stack, t_list *new_node)
{
	if (!new_node || !stack)
		return (0);
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
