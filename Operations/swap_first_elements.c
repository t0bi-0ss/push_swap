/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_first_elements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:00:15 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 15:08:56 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	swap_first_elements(t_stack *stack)
{
	t_list	*original_head;
	t_list *second_node;
	
	if (!stack->head || !stack->head->next)
		return ;
	original_head = stack->head;
	second_node = original_head->next;
	second_node->prev = original_head->prev;
	original_head->prev->next = second_node;
	original_head->next = second_node->next;
	second_node->next->prev = original_head;
	second_node->next = original_head;
	original_head->prev = second_node;
	stack->head = second_node;
	stack->tail = stack->head->prev;
}
