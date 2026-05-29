/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:37:59 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/28 17:10:16 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

t_list	*extract_first(t_stack *stack);

void	push_element(t_stack *stack_to_push, t_stack *stack_to_extract)
{
	t_list *extracted;
	
	if (!stack_to_push->head || !stack_to_extract->head)
		return ;
	extracted = extract_first(stack_to_extract);
	extracted->prev = stack_to_push->head->prev;
	extracted->next = stack_to_push->head;
	stack_to_push->head->prev->next = extracted;
	stack_to_push->head->prev = extracted;
	stack_to_push->head = extracted;
}

t_list	*extract_first(t_stack *stack)
{
	t_list *extracted;

	if (!stack->head)
		return (NULL);
	extracted = stack->head;
	if (stack->size == 1)
	{
		stack->head = NULL;
		return (extracted);
	}
	stack->head = stack->head->next;
	stack->head->prev = extracted->prev;
	extracted->prev->next = stack->head;
	stack->size -= 1;
	return (extracted);
}
