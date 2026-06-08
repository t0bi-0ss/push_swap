/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:54:23 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 18:59:48 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Assigns desired final index for each of the lists nodes*/
void	assign_index(t_stack *stack_a)
{
	int	index;
	t_list *minimum_node;

	index = 1;
	while (index <= stack_a->size)
	{
		minimum_node = get_minimum_node(stack_a);
		minimum_node->index = index;
		index++;
	}
}