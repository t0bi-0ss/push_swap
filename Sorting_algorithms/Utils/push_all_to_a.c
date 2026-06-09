/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_to_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 20:20:00 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/09 20:22:25 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

/*Push every element from b to a*/
void push_all_to_a(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	while (stack_b->size)
		pa(stack_a, stack_b, ops);
}