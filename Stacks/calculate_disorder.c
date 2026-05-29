/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_disorder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:57:11 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/28 14:50:18 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	count_smaller_nums(t_list *node, t_list *head, int num)
{
	int	counter;

	counter = 0;
	while (node != head)
	{
		if (node->num < num)
			counter++;
		node = node->next;
	}
	return (counter);
}

int	calculate_disorder(t_list *head)
{
	t_list	*current;
	int		disorder;

	disorder = 0;
	current = head->next;
	while (current != head)
	{
		disorder += count_smaller_nums(current, head, current->prev->num);
		current = current->next;
	}
	return (disorder);
}