/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:46:02 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/19 19:15:37 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	selection_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	ops->strategy = 1;
	if (!stack_a || !stack_b || !ops || !stack_a->head)
		return ;
	if (stack_a->disorder == 0)
		return ;
	if (stack_a->size >= 2 && stack_a->size <= 6)
	{
		assign_index(stack_a);
		select_by_size(stack_a, stack_b, ops);
		return ;
	}
	push_all_to_b(stack_a, stack_b, ops);
	return_all_to_a(stack_a, stack_b, ops);
}
