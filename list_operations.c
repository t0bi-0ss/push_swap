/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:26:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/25 14:28:46 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_new_node(int num)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (node_error(), NULL);
	new_node->num = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

int	ft_insert_new_node(t_stack **stack_ptr, t_list *new_node)
{
	t_list	*tmp_head;
	t_list	*tmp_prev;

	if (!new_node || !*stack_ptr)
		return (0);
	tmp_head = NULL;
	tmp_prev = NULL;
	if (!(*stack_ptr)->head)
	{
		(*stack_ptr)->head = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		tmp_head = (*stack_ptr)->head;
		tmp_prev = tmp_head->prev;
		tmp_prev->next = new_node;
		new_node->next = tmp_head;
		tmp_head->prev = new_node;
	}
	return (1);
}
