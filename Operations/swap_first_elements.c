/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_first_elements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:00:15 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/28 16:33:04 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	swap_first_elements(t_stack *stack)
{
	t_list *tmp;
	
	if (!stack->head || !stack->head->next)
		return ;
	if (stack->size == 2)
	{
		stack->head = stack->head->next;
		return ;
	}
	tmp = stack->head->next; 
	stack->head->prev->next = tmp; 
	tmp->prev = stack->head->prev; 
	stack->head->next = tmp->next; 
	tmp->next->prev = stack->head; 
	stack->head->prev = tmp; 
	tmp->next = stack->head; 
	stack->head = tmp; 
}
