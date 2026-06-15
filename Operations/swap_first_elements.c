/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_first_elements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:00:15 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:58 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Swap the first two elements at the top of passed stack*/
void	swap_first_elements(t_stack *stack)
{
	t_list	*original_head;
	t_list	*second_node;

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
