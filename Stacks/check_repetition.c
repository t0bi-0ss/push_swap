/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repetition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:41:25 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:28 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	is_repeated(t_list *head, t_list *node, int num);

int	repetition_found(t_stack *stack)
{
	t_list	*current;

	current = stack->head->next;
	while (current != stack->head)
	{
		if (is_repeated(stack->head, current, current->prev->num))
			return (1);
		current = current->next;
	}
	return (0);
}

int	is_repeated(t_list *head, t_list *node, int num)
{
	while (node != head)
	{
		if (node->num == num)
			return (1);
		node = node->next;
	}
	return (0);
}
