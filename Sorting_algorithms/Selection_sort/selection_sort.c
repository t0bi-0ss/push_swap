/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:46:02 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 14:47:47 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void selection_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	push_all_to_b(stack_a, stack_b, ops);
	return_all_to_a(stack_a, stack_b, ops);
}