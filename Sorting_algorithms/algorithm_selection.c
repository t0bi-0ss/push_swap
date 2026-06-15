/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:41:26 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:19 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	algorithm_selection(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	if (ops->strategy == 1 || (stack_a->disorder < 0.2 && ops->strategy == 0))
		selection_sort(stack_a, stack_b, ops);
	else if (ops->strategy == 2 || ((stack_a->disorder >= 0.2
				&& stack_a->disorder < 0.5) && ops->strategy == 0))
		chunk_sort(stack_a, stack_b, ops);
	else
		radix_sort(stack_a, stack_b, ops);
}
