/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_by_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:36:26 by ilbozhek          #+#    #+#             */
/*   Updated: 2026/06/19 19:34:09 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	select_by_size(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	if (!stack_a || !stack_a->head || !stack_b || !ops)
		return ;
	if (stack_a->size == 3)
		sort_three(stack_a, ops);
	else if (stack_a->size == 5)
		sort_five(stack_a, stack_b, ops);
	else if (stack_a->size == 4)
		sort_four(stack_a, stack_b, ops);
	else if (stack_a->size == 2)
		ra(stack_a, ops);
	else if (stack_a->size == 6)
		sort_six(stack_a, stack_b, ops);
}
