/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look_for_max_location.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:48:15 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 19:56:02 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

int	look_for_min_position(t_stack *stack, int min)
{
	t_list *current;
	int		position;

	if (!stack->head)
		return (-1);
	if (stack->head->num == min)
		return (0);
	position = 1;
	current = stack->head->next;
	while (current != stack->head)
	{
		if (current->num == min)
			return (position);
		current = current->next;
		position++;
	}
	return (-2);
}