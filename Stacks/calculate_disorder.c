/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_disorder.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:57:11 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:24 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	count_smaller_nums(t_list *node, t_list *head, int num);

int	calculate_disorder(t_stack *stack)
{
	t_list	*current;
	float	disorder;
	int		total_pairs;

	if (!stack || !stack->head)
		return (-1);
	if (stack->size < 2)
	{
		stack->disorder = 0;
		return (1);
	}
	disorder = 0;
	current = stack->head->next;
	while (current != stack->head)
	{
		disorder += count_smaller_nums(current, stack->head,
				current->prev->num);
		current = current->next;
	}
	total_pairs = stack->size * (stack->size - 1) / 2;
	disorder = disorder / total_pairs;
	stack->disorder = disorder;
	return (1);
}

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
