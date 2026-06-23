/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_indexes_to_zero.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:20:05 by ilbozhek          #+#    #+#             */
/*   Updated: 2026/06/19 18:29:01 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	all_indexes_to_zero(t_stack *stack_a)
{
	t_list	*current_node;

	if (!stack_a | !stack_a->head)
		return ;
	current_node = stack_a->head->next;
	stack_a->head->index = 0;
	while (current_node != stack_a->head)
	{
		current_node->index = 0;
		current_node = current_node->next;
	}
}
