/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_node_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:02:19 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/29 19:08:14 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"
#include <stdio.h>

void print_node_value(t_stack *stack)
{
	t_list *tmp;
	int		node_num;

	node_num = 1;
	tmp = stack->head;
	while (tmp != stack->tail)
	{
		printf("node %i value is: %i\n", node_num, tmp->num);
		node_num++;
		tmp = tmp->next;
	}
	printf("node %i value is: %i\n", node_num, tmp->num);
}