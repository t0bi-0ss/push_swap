/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 20:52:40 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/19 19:12:05 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	chunk_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	if (!stack_a || !stack_b || !ops || !stack_a->head)
		return ;
	ops->strategy = 2;
	if (stack_a->disorder == 0)
		return ;
	if (stack_a->size >= 2 && stack_a->size <= 6)
	{
		assign_index(stack_a);
		select_by_size(stack_a, stack_b, ops);
		return ;
	}
	chunks_to_b(stack_a, stack_b, ops);
	push_all_largest_to_a(stack_a, stack_b, ops);
}
