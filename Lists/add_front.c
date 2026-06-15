/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:20:52 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:07 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	ft_add_front(t_stack *stack, t_list *new_node)
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
		new_node->next = stack->head;
		new_node->prev = stack->head->prev;
		stack->head->prev = new_node;
		stack->tail->next = new_node;
		stack->head = new_node;
	}
	stack->size += 1;
	return (1);
}
