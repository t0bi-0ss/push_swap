/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look_for_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:42:05 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:03 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

int	look_for_max(t_stack *stack)
{
	int		max_found;
	t_list	*current;

	if (!stack->head)
		return (0);
	max_found = stack->head->num;
	current = stack->head->next;
	while (current != stack->head)
	{
		if (current->num > max_found)
			max_found = current->num;
		current = current->next;
	}
	return (max_found);
}
