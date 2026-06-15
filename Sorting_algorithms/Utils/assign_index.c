/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:54:23 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:53:57 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Assigns desired final index for each of the lists nodes*/
void	assign_index(t_stack *stack_a)
{
	int		index;
	t_list	*minimum_node;

	index = 1;
	while (index <= stack_a->size)
	{
		minimum_node = get_minimum_node(stack_a);
		minimum_node->index = index;
		index++;
	}
}
