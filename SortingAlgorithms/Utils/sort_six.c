/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_six.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 19:08:45 by ilbozhek          #+#    #+#             */
/*   Updated: 2026/06/19 19:33:11 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	sort_six(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	if (!stack_a || !stack_b || !ops || !stack_a->head)
		return ;
	push_min(stack_a, stack_b, look_for_min_position(stack_a,
			look_for_min(stack_a)), ops);
	all_indexes_to_zero(stack_a);
	assign_index(stack_a);
	sort_five(stack_a, stack_b, ops);
	pa(stack_a, stack_b, ops);
}
