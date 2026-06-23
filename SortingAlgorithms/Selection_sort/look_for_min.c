/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look_for_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:42:05 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/19 19:21:12 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

int	look_for_min(t_stack *stack)
{
	int		min_found;
	t_list	*current;

	if (!stack || !stack->head)
		return (0);
	min_found = stack->head->num;
	current = stack->head->next;
	while (current != stack->head)
	{
		if (current->num < min_found)
			min_found = current->num;
		current = current->next;
	}
	return (min_found);
}
