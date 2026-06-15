/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_first.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:35:34 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:15 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

t_list	*extract_first(t_stack *stack)
{
	t_list	*extracted;

	if (!stack->head)
		return (NULL);
	extracted = stack->head;
	if (stack->size == 1)
	{
		stack->head = NULL;
		extracted->next = NULL;
		extracted->prev = NULL;
		stack->size -= 1;
		return (extracted);
	}
	stack->head = extracted->next;
	stack->head->prev = stack->tail;
	stack->tail->next = stack->head;
	extracted->next = NULL;
	extracted->prev = NULL;
	stack->size -= 1;
	return (extracted);
}
